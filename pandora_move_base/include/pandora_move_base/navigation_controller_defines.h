#ifndef NAVIGATION_CONTROLLER_DEFINES_H
#define NAVIGATION_CONTROLLER_DEFINES_H

	#include <ros/ros.h>
	#include <tf/tf.h>
	#include <actionlib/server/simple_action_server.h>
	#include <actionlib/client/simple_action_client.h>
	#include "move_base_msgs/MoveBaseAction.h"
	#include "pandora_navigation_communications/RobotStuckAction.h"
	#include "pandora_navigation_communications/InitialTurnAction.h"
	
	#include "pandora_navigation_common/map/map_updater.h"
	
	//Navigator
	#include "controllers_and_sensors_communications/compassMsg.h"
	#include "controllers_and_sensors_communications/sonarMsg.h"
	#include "controllers_and_sensors_communications/headSonarMsg.h"
	
	
	#include "geometry_msgs/PoseStamped.h"
	#include "pandora_path_planner/pandora_path_planner.h"
	#include "pandora_move_base/navigator/pandora_navigator.h"
	
	#include "pandora_navigation_communications/navigationMapSrv.h"
	
	#include <nav_msgs/Path.h>
	#include <sensor_msgs/LaserScan.h>
	#include <sensor_msgs/Range.h>
	
	//~ #define FLOW
	//---M---//
	//~ #ifndef MAP_SIZE_H
	//~ #define MAP_SIZE_H
		#define MAP_HEIGHT				4096		//!< Map height
		#define MAP_WIDTH				4096		//!< Map width
		#define MAP_SIZE				4096 		//!< Maximum map size
		#define	START_X					MAP_HEIGHT/2		//!< Start robot X coordinate in map
		#define	START_Y 				MAP_HEIGHT/2		//!< Start robot Y coordinate in map
	//~ #endif

	#define OCGD						0.02
	#define D_PI						3.141592654
	
	
	#define VELOCITIES_REQUEST_INTERVAL			100000	//!< Speed request interval in useconds
	#define TIME_OUT_SECONDS 					16	//!< Goal time out theshold in seconds (approximately 16 seconds)
	#define TIME_OUT_THRESHOLD 					160	//!< navigator iterations for timeout of approximately 16 seconds
	
	
	#define EXPECTED_X_THRES			100 
	#define EXPECTED_Y_THRES 			100
	#define EXPECTED_THETA_THRES 		D_PI
	
	
	
	//~ #define	MOVE_WITH_SUBGOALS
	#define	MOVE_WITH_PATH_RECALCULATION
	//~ #define	MOVE_WITH_PATH_RECALCULATION_STUCK_AVOIDANCE
	//~ #define	MOVE_TO_FINAL_TARGET
	//~
	
	//~ #define	SIMPLE_UNSTUCK_ROTATION
	#define	UNSTUCK_ROTATION_WITH_CORRECTIONS
	
	
#endif