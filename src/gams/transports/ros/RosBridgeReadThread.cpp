
#include "gams/loggers/GlobalLogger.h"
#include "RosBridgeReadThread.h"

namespace knowledge = madara::knowledge;


void gams::transports::RosBridgeReadThread::messageCallback (
  const topic_tools::ShapeShifter::ConstPtr& msg,
  const std::string &topic_name )
{
  std::cout << "CALLBACK FROM "  << topic_name << " <" << msg->getDataType() << "> " << msg << std::endl;
  //std::string container = gams::utility::ros::ros_to_gams_name(topic_name);
  //Check if topic is in the topic mapping
  std::map<std::string, std::string>::iterator it = topic_map_.find (topic_name);
  std::string container;

  if (it != topic_map_.end ())
  {
    container = it->second;
  }
  else
  {
    container = gams::utility::ros::ros_to_gams_name (topic_name);
  }

  parser_->parse_message(msg, container);
}

// constructor
gams::transports::RosBridgeReadThread::RosBridgeReadThread (
  const std::string & id,
  const madara::transport::TransportSettings & settings,
  madara::transport::BandwidthMonitor & send_monitor,
  madara::transport::BandwidthMonitor & receive_monitor,
  madara::transport::PacketScheduler & packet_scheduler,
  std::vector<std::string> topics,
  std::map<std::string,std::string> topic_map)
: send_monitor_ (send_monitor),
  receive_monitor_ (receive_monitor),
  packet_scheduler_ (packet_scheduler),
  topics_(topics),
  topic_map_(topic_map)
{
}

// destructor
gams::transports::RosBridgeReadThread::~RosBridgeReadThread ()
{
  delete[] parser_;
}

/**
 * Initialization to a knowledge base.
 **/
void
gams::transports::RosBridgeReadThread::init (knowledge::KnowledgeBase & knowledge)
{
  std::cout << "Initializing RosBridgeReadThread\n" << std::endl;


  // grab the context so we have access to update_from_external  
  context_ = &(knowledge.get_context ());
  
  // setup the receive buffer
  if (settings_.queue_length > 0)
    buffer_ = new char [settings_.queue_length];

  ros::NodeHandle node;

  parser_ = new gams::utility::ros::RosParser(&knowledge, "world", "frame1");

  for (const std::string topic_name: topics_ )
  {
    boost::function<void (const topic_tools::ShapeShifter::ConstPtr&)> callback;
    callback = boost::bind (
      &gams::transports::RosBridgeReadThread::messageCallback, this,
      _1, topic_name );
    subscribers_.push_back (node.subscribe( topic_name, 10, callback));
  }

}

/**
 * Executes the actual thread logic.
 **/
void
gams::transports::RosBridgeReadThread::run (void)
{
  ros::spinOnce();
}
