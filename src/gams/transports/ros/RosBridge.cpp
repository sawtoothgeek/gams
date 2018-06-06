
#include <sstream>
#include "RosBridge.h"
#include "RosBridgeReadThread.h"

namespace knowledge = madara::knowledge;

gams::transports::RosBridge::RosBridge (
  const std::string & id,
  madara::transport::TransportSettings & new_settings,
  knowledge::KnowledgeBase & knowledge,
  std::vector<std::string> topics,
  std::map<std::string,std::string> topic_map,
  std::map<std::string, std::string> pub_topic_types)
: madara::transport::Base (id, new_settings, knowledge.get_context ()),
  topics_(topics), topic_map_(topic_map), pub_topic_types_(pub_topic_types)
{
  // populate variables like buffer_ based on transport settings
  Base::setup ();

  char **argv;
  int argc = 0;
  ros::init(argc, argv, "ros_bridge");
  ros::NodeHandle node;

  parser_ = new gams::utility::ros::GamsParser(&knowledge);
  
  // set the data plane for read threads
  read_threads_.set_data_plane (knowledge);
  
  // check the read hz settings to see if the user has passed something weird
  double hertz = new_settings.read_thread_hertz;
  if (hertz < 0.0)
  {
    hertz = 0.0;
  }

  // create the read threads specified in TransportSettings  
  for (uint32_t i = 0; i < new_settings.read_threads; ++i)
  {
    // construct a unique id for a new thread
    std::stringstream thread_name;
    thread_name << "read";
    thread_name << i;
    
    // start the thread at the specified hertz
    read_threads_.run (
      hertz,
      thread_name.str (),
      new RosBridgeReadThread (
        id_, new_settings, 
        send_monitor_, receive_monitor_, packet_scheduler_,
        topics_, topic_map_));
  }
}

gams::transports::RosBridge::~RosBridge ()
{
  delete[] parser_;
  //std::cout << "TERMINATE!!!" << std::endl << std::endl << std::endl << std::endl;
  //read_threads_.terminate();
}

long
gams::transports::RosBridge::send_data (
  const madara::knowledge::VariableReferenceMap & modifieds)
{
  /**
   * Return number of bytes sent or negative for error
   **/
  long result (0);
  
  /**
   * This is where you should do your custom transport sending logic/actions
   **/
  std::cout << std::endl << "SENDING UPDATE TO ROS!!!" << std::endl;


  for (
    madara::knowledge::VariableReferenceMap::const_iterator it = modifieds.begin();
    it != modifieds.end(); it++)
  {
    const char * key = it->first;
    std::cout << "Got update for " << key;
    std::pair<std::string, std::string> names = get_update_container_pair_ (key);

    if (names.first != "")
    {
      std::cout << " - bingo" << std::endl;
      std::cout << " will publish " << names.second << 
        " to " << names.first << std::endl;
      std::map<std::string, std::string>::iterator type_it =
        pub_topic_types_.find (names.first);
      if (type_it != pub_topic_types_.end())
      {
        parser_->parse_message(names.second, names.first, type_it->second);
      }
      else
      {
        std::cout << " - no topic type defined!" << std::endl;
      }
    }
    else
    {
      std::cout << " - ignored" << std::endl;
    }
  }
  std::cout << std::endl;
  return result;
}

std::pair<std::string, std::string>
gams::transports::RosBridge::get_update_container_pair_ (
  const char * container_name)
{
  std::string current_key = container_name;
  while ( true )
  {
    std::map<std::string, std::string>::iterator top_it;
    std::string container;
    for (top_it = topic_map_.begin(); top_it != topic_map_.end (); ++top_it)
    {
      if (top_it->second == current_key)
      {
        container = top_it->second;
        return std::make_pair(top_it->first, top_it->second);
      }
    }
    int delim_pos = current_key.find_last_of('.');
    if (delim_pos == std::string::npos)
      break;
    current_key = current_key.substr(0, delim_pos);
  }
  return std::make_pair("", "");
}
