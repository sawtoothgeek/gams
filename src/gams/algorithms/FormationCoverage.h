/**
 * Copyright (c) 2014 Carnegie Mellon University. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following acknowledgments and disclaimers.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * 3. The names Carnegie Mellon University, "SEI and/or Software
 *    Engineering Institute" shall not be used to endorse or promote products
 *    derived from this software without prior written permission. For written
 *    permission, please contact permission@sei.cmu.edu.
 * 
 * 4. Products derived from this software may not be called "SEI" nor may "SEI"
 *    appear in their names without prior written permission of
 *    permission@sei.cmu.edu.
 * 
 * 5. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 * 
 *      This material is based upon work funded and supported by the Department
 *      of Defense under Contract No. FA8721-05-C-0003 with Carnegie Mellon
 *      University for the operation of the Software Engineering Institute, a
 *      federally funded research and development center. Any opinions,
 *      findings and conclusions or recommendations expressed in this material
 *      are those of the author(s) and do not necessarily reflect the views of
 *      the United States Department of Defense.
 * 
 *      NO WARRANTY. THIS CARNEGIE MELLON UNIVERSITY AND SOFTWARE ENGINEERING
 *      INSTITUTE MATERIAL IS FURNISHED ON AN AS-IS BASIS. CARNEGIE MELLON
 *      UNIVERSITY MAKES NO WARRANTIES OF ANY KIND, EITHER EXPRESSED OR
 *      IMPLIED, AS TO ANY MATTER INCLUDING, BUT NOT LIMITED TO, WARRANTY OF
 *      FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY, OR RESULTS
 *      OBTAINED FROM USE OF THE MATERIAL. CARNEGIE MELLON UNIVERSITY DOES
 *      NOT MAKE ANY WARRANTY OF ANY KIND WITH RESPECT TO FREEDOM FROM PATENT,
 *      TRADEMARK, OR COPYRIGHT INFRINGEMENT.
 * 
 *      This material has been approved for public release and unlimited
 *      distribution.
 **/

/**
 * @file FormationCoverage.h
 * @author Anton Dukeman <anton.dukeman@gmail.com>
 *
 * Declaration of FormationCoverage class
 * - The head agent runs some area coverage algorithm
 * - Followers perform formation flying around the head agent
 **/

#ifndef _GAMS_ALGORITHMS_FORMATION_COVERAGE_H_
#define _GAMS_ALGORITHMS_FORMATION_COVERAGE_H_

#include "gams/variables/Sensor.h"
#include "gams/platforms/BasePlatform.h"
#include "gams/algorithms/FormationFlying.h"
#include "gams/variables/AlgorithmStatus.h"
#include "gams/variables/Self.h"
#include "gams/algorithms/BaseAlgorithm.h"
#include "gams/algorithms/area_coverage/BaseAreaCoverage.h"
#include "gams/utility/GPSPosition.h"
#include "gams/algorithms/AlgorithmFactory.h"

namespace gams
{
  namespace algorithms
  {
    /**
    * An algorithm for covering an area in formation
    **/
    class GAMSExport FormationCoverage : public BaseAlgorithm
    {
    public:
      /**
       * Constructor
       * @param  head_id      target of the formation
       * @param  offset       offset of formation
       * @param  members      number of members
       * @param  modifier     modifier that influences the formation
       * @param  coverage     area coverage algorithm to run
       * @param  cover_args   args for area coverage algorithm
       * @param  knowledge    the context containing variables and values
       * @param  platform     the underlying platform the algorithm will use
       * @param  sensors      map of sensor names to sensor information
       * @param  self         self-referencing variables
       **/
      FormationCoverage (
        const madara::KnowledgeRecord::Integer & head_id,
        const std::vector<double> & offset,
        const std::vector<madara::KnowledgeRecord::Integer> & members,
        const std::string & modifier,
        const std::string & coverage,
        const madara::KnowledgeVector & cover_args,
        madara::knowledge::KnowledgeBase * knowledge = 0,
        platforms::BasePlatform * platform = 0,
        variables::Sensors * sensors = 0,
        variables::Self * self = 0);

      /**
       * Destructor
       **/
      ~FormationCoverage ();

      /**
       * Assignment operator
       * @param  rhs   values to copy
       **/
      void operator= (const FormationCoverage & rhs);
      
      /**
       * Analyzes environment, platform, or other information
       * @return bitmask status of the platform. @see Status.
       **/
      virtual int analyze (void);
      
      /**
       * Plans the next execution of the algorithm
       * @return bitmask status of the platform. @see Status.
       **/
      virtual int execute (void);

      /**
       * Plans the next execution of the algorithm
       * @return bitmask status of the platform. @see Status.
       **/
      virtual int plan (void);
      
    protected:
      /// algorithm for area coverage by head
      area_coverage::BaseAreaCoverage* head_algo_;

      /// performing area coverage
      bool is_covering_;

      /// algorithms for followers
      FormationFlying* my_formation_;

      /// head destination
      madara::knowledge::containers::NativeDoubleArray head_destination_;
    };
    
    /**
     * A factory class for creating Formation Coverage algorithms
     **/
    class GAMSExport FormationCoverageFactory : public AlgorithmFactory
    {
    public:

      /**
       * Creates a Formation Coverage Algorithm.
       * @param   args      args[0] = the head of the formation
       *                    args[1] = the offset
       *                    args[2] = members involved in the coverage
       *                    args[3] = modifier
       *                    args[4] = coverage type
       *                    args[5+] = arguments to coverage algorithm
       * @param   knowledge the knowledge base to use
       * @param   platform  the platform. This will be set by the
       *                    controller in init_vars.
       * @param   sensors   the sensor info. This will be set by the
       *                    controller in init_vars.
       * @param   self      self-referencing variables. This will be
       *                    set by the controller in init_vars
       * @param   devices   the list of devices, which is dictated by
       *                    init_vars when a number of processes is set. This
       *                    will be set by the controller in init_vars
       **/
      virtual BaseAlgorithm * create (
        const madara::KnowledgeVector & args,
        madara::knowledge::KnowledgeBase * knowledge,
        platforms::BasePlatform * platform,
        variables::Sensors * sensors,
        variables::Self * self,
        variables::Devices * devices);
    };
  }
}

#endif // _GAMS_ALGORITHMS_FORMATION_COVERAGE_H_