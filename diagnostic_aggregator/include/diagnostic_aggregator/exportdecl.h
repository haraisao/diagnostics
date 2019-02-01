/*
 * Cross platform macros.
 *
 */
#ifndef DIAGNOSTIC_AGGREGATOR__DECL_H_
#define DIAGNOSTIC_AGGREGATOR__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef diagnostic_aggregator_EXPORTS  // we are building a shared lib/dll
    #define DIAGNOSTIC_AGGREGATOR_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define DIAGNOSTIC_AGGREGATOR_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define DIAGNOSTIC_AGGREGATOR_DECL
#endif

#endif