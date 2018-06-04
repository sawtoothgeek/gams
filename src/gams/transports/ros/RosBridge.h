
#ifndef   _TRANSPORT_ROSBRIDGE_H_
#define   _TRANSPORT_ROSBRIDGE_H_

#include "madara/transport/Transport.h"
#include "madara/threads/Threader.h"
#include "RosBridgeReadThread.h"

namespace gams
{
  namespace transports
  {
    /**
     * Custom network transport generated by gpc.pl
     **/
    class RosBridge : public madara::transport::Base
    {
    public:
      /**
       * Constructor
       * @param   id                unique identifier (generally host:port)
       * @param   new_settings      settings to apply to the transport
       * @param   context           the knowledge record context
       **/
      RosBridge (const std::string & id,
        madara::transport::TransportSettings & new_settings,
        madara::knowledge::KnowledgeBase & context,
        std::vector<std::string> topics,
        std::map<std::string,std::string> topic_map);

      /**
       * Destructor
       **/
      virtual ~RosBridge ();
      
      /**
       * Sends a list of updates to the domain. This function must be
       * implemented by your transport
       * @param  modifieds  a list of keys to values of all records that have
       *          been updated and could be sent.
       * @return  result of operation or -1 if we are shutting down
       **/
      long send_data (const madara::knowledge::VariableReferenceMap & modifieds);
      
    protected:
      /// threads for monitoring knowledge updates
      madara::threads::Threader read_threads_;

      // Enabled topics
      std::vector<std::string> topics_;
      // Topic map
      std::map<std::string,std::string> topic_map_;
    };
  }
}

#endif // _TRANSPORT_ROSBRIDGE_H_
