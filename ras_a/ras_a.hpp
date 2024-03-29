/** @file
 *	@brief MAVLink comm protocol generated from ras_a.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace ras_a {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 238> MESSAGE_ENTRIES {{ {0, 50, 9, 9, 0, 0, 0}, {1, 124, 31, 43, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {4, 237, 14, 14, 3, 12, 13}, {5, 217, 28, 28, 1, 0, 0}, {6, 104, 3, 3, 0, 0, 0}, {7, 119, 32, 32, 0, 0, 0}, {8, 117, 36, 36, 0, 0, 0}, {11, 89, 6, 6, 1, 4, 0}, {19, 137, 24, 24, 3, 4, 5}, {20, 214, 20, 20, 3, 2, 3}, {21, 159, 2, 2, 3, 0, 1}, {22, 220, 25, 25, 0, 0, 0}, {23, 168, 23, 23, 3, 4, 5}, {24, 24, 30, 52, 0, 0, 0}, {25, 23, 101, 101, 0, 0, 0}, {26, 170, 22, 24, 0, 0, 0}, {27, 144, 26, 29, 0, 0, 0}, {28, 67, 16, 16, 0, 0, 0}, {29, 115, 14, 16, 0, 0, 0}, {30, 39, 28, 28, 0, 0, 0}, {31, 246, 32, 48, 0, 0, 0}, {32, 185, 28, 28, 0, 0, 0}, {33, 104, 28, 28, 0, 0, 0}, {34, 237, 22, 22, 0, 0, 0}, {35, 244, 22, 22, 0, 0, 0}, {36, 222, 21, 37, 0, 0, 0}, {37, 212, 6, 7, 3, 4, 5}, {38, 9, 6, 7, 3, 4, 5}, {39, 254, 37, 38, 3, 32, 33}, {40, 230, 4, 5, 3, 2, 3}, {41, 28, 4, 4, 3, 2, 3}, {42, 28, 2, 6, 0, 0, 0}, {43, 132, 2, 3, 3, 0, 1}, {44, 221, 4, 5, 3, 2, 3}, {45, 232, 2, 3, 3, 0, 1}, {46, 11, 2, 2, 0, 0, 0}, {47, 153, 3, 4, 3, 0, 1}, {48, 41, 13, 21, 1, 12, 0}, {49, 39, 12, 20, 0, 0, 0}, {50, 78, 37, 37, 3, 18, 19}, {51, 196, 4, 5, 3, 2, 3}, {54, 15, 27, 27, 3, 24, 25}, {55, 3, 25, 25, 0, 0, 0}, {61, 167, 72, 72, 0, 0, 0}, {62, 183, 26, 26, 0, 0, 0}, {63, 119, 181, 181, 0, 0, 0}, {64, 191, 225, 225, 0, 0, 0}, {65, 118, 42, 42, 0, 0, 0}, {66, 148, 6, 6, 3, 2, 3}, {67, 21, 4, 4, 0, 0, 0}, {69, 243, 11, 30, 1, 10, 0}, {70, 124, 18, 38, 3, 16, 17}, {73, 38, 37, 38, 3, 32, 33}, {74, 20, 20, 20, 0, 0, 0}, {75, 158, 35, 35, 3, 30, 31}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {80, 14, 4, 4, 3, 2, 3}, {81, 106, 22, 22, 0, 0, 0}, {82, 49, 39, 51, 3, 36, 37}, {83, 22, 37, 37, 0, 0, 0}, {84, 143, 53, 53, 3, 50, 51}, {85, 140, 51, 51, 0, 0, 0}, {86, 5, 53, 53, 3, 50, 51}, {87, 150, 51, 51, 0, 0, 0}, {89, 231, 28, 28, 0, 0, 0}, {90, 183, 56, 56, 0, 0, 0}, {91, 63, 42, 42, 0, 0, 0}, {92, 54, 33, 33, 0, 0, 0}, {93, 47, 81, 81, 0, 0, 0}, {100, 175, 26, 34, 0, 0, 0}, {101, 102, 32, 117, 0, 0, 0}, {102, 158, 32, 117, 0, 0, 0}, {103, 208, 20, 57, 0, 0, 0}, {104, 56, 32, 116, 0, 0, 0}, {105, 93, 62, 63, 0, 0, 0}, {106, 138, 44, 44, 0, 0, 0}, {107, 108, 64, 65, 0, 0, 0}, {108, 32, 84, 92, 0, 0, 0}, {109, 185, 9, 9, 0, 0, 0}, {110, 84, 254, 254, 3, 1, 2}, {111, 34, 16, 18, 3, 16, 17}, {112, 174, 12, 12, 0, 0, 0}, {113, 124, 36, 39, 0, 0, 0}, {114, 237, 44, 44, 0, 0, 0}, {115, 4, 64, 64, 0, 0, 0}, {116, 76, 22, 24, 0, 0, 0}, {117, 128, 6, 6, 3, 4, 5}, {118, 56, 14, 14, 0, 0, 0}, {119, 116, 12, 12, 3, 10, 11}, {120, 134, 97, 97, 0, 0, 0}, {121, 237, 2, 2, 3, 0, 1}, {122, 203, 2, 2, 3, 0, 1}, {123, 250, 113, 113, 3, 0, 1}, {124, 87, 35, 57, 0, 0, 0}, {125, 203, 6, 6, 0, 0, 0}, {126, 220, 79, 81, 3, 79, 80}, {127, 25, 35, 35, 0, 0, 0}, {128, 226, 35, 35, 0, 0, 0}, {129, 46, 22, 24, 0, 0, 0}, {130, 29, 13, 13, 0, 0, 0}, {131, 223, 255, 255, 0, 0, 0}, {132, 85, 14, 39, 0, 0, 0}, {133, 6, 18, 18, 0, 0, 0}, {134, 229, 43, 43, 0, 0, 0}, {135, 203, 8, 8, 0, 0, 0}, {136, 1, 22, 22, 0, 0, 0}, {137, 195, 14, 16, 0, 0, 0}, {138, 109, 36, 120, 0, 0, 0}, {139, 168, 43, 43, 3, 41, 42}, {140, 181, 41, 41, 0, 0, 0}, {141, 47, 32, 32, 0, 0, 0}, {142, 72, 243, 243, 0, 0, 0}, {143, 131, 14, 16, 0, 0, 0}, {144, 127, 93, 93, 0, 0, 0}, {146, 103, 100, 100, 0, 0, 0}, {147, 154, 36, 54, 0, 0, 0}, {148, 178, 60, 78, 0, 0, 0}, {149, 200, 30, 60, 0, 0, 0}, {162, 189, 8, 9, 0, 0, 0}, {192, 36, 44, 54, 0, 0, 0}, {225, 208, 65, 73, 0, 0, 0}, {230, 163, 42, 42, 0, 0, 0}, {231, 105, 40, 40, 0, 0, 0}, {232, 151, 63, 65, 0, 0, 0}, {233, 35, 182, 182, 0, 0, 0}, {234, 150, 40, 40, 0, 0, 0}, {235, 179, 42, 42, 0, 0, 0}, {241, 90, 32, 32, 0, 0, 0}, {242, 104, 52, 60, 0, 0, 0}, {243, 85, 53, 61, 1, 52, 0}, {244, 95, 6, 6, 0, 0, 0}, {245, 130, 2, 2, 0, 0, 0}, {246, 184, 38, 38, 0, 0, 0}, {247, 81, 19, 19, 0, 0, 0}, {248, 8, 254, 254, 3, 3, 4}, {249, 204, 36, 36, 0, 0, 0}, {250, 49, 30, 30, 0, 0, 0}, {251, 170, 18, 18, 0, 0, 0}, {252, 44, 18, 18, 0, 0, 0}, {253, 83, 51, 54, 0, 0, 0}, {254, 46, 9, 9, 0, 0, 0}, {256, 71, 42, 42, 3, 8, 9}, {257, 131, 9, 9, 0, 0, 0}, {258, 187, 32, 232, 3, 0, 1}, {259, 92, 235, 236, 0, 0, 0}, {260, 146, 5, 13, 0, 0, 0}, {261, 179, 27, 61, 0, 0, 0}, {262, 12, 18, 22, 0, 0, 0}, {263, 133, 255, 255, 0, 0, 0}, {264, 49, 28, 28, 0, 0, 0}, {265, 26, 16, 20, 0, 0, 0}, {266, 193, 255, 255, 3, 2, 3}, {267, 35, 255, 255, 3, 2, 3}, {268, 14, 4, 4, 3, 2, 3}, {269, 109, 213, 213, 0, 0, 0}, {270, 59, 19, 19, 0, 0, 0}, {271, 22, 52, 52, 0, 0, 0}, {275, 126, 31, 31, 0, 0, 0}, {276, 18, 49, 49, 0, 0, 0}, {280, 70, 33, 33, 0, 0, 0}, {281, 48, 13, 13, 0, 0, 0}, {282, 123, 35, 35, 3, 32, 33}, {283, 74, 144, 145, 0, 0, 0}, {284, 99, 32, 32, 3, 30, 31}, {285, 137, 40, 49, 3, 38, 39}, {286, 210, 53, 57, 3, 50, 51}, {287, 1, 23, 23, 3, 20, 21}, {288, 20, 23, 23, 3, 20, 21}, {290, 251, 46, 46, 0, 0, 0}, {291, 10, 57, 57, 0, 0, 0}, {295, 234, 12, 12, 0, 0, 0}, {298, 237, 37, 37, 0, 0, 0}, {299, 19, 96, 98, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {301, 243, 58, 58, 0, 0, 0}, {310, 28, 17, 17, 0, 0, 0}, {311, 95, 116, 116, 0, 0, 0}, {320, 243, 20, 20, 3, 2, 3}, {321, 88, 2, 2, 3, 0, 1}, {322, 243, 149, 149, 0, 0, 0}, {323, 78, 147, 147, 3, 0, 1}, {324, 132, 146, 146, 0, 0, 0}, {330, 23, 158, 167, 0, 0, 0}, {331, 91, 230, 233, 0, 0, 0}, {332, 236, 239, 239, 0, 0, 0}, {333, 231, 109, 109, 0, 0, 0}, {334, 72, 10, 10, 0, 0, 0}, {335, 225, 24, 24, 0, 0, 0}, {336, 245, 84, 84, 0, 0, 0}, {339, 199, 5, 5, 0, 0, 0}, {340, 99, 70, 70, 0, 0, 0}, {350, 232, 20, 252, 0, 0, 0}, {360, 11, 25, 25, 0, 0, 0}, {361, 93, 33, 33, 0, 0, 0}, {369, 151, 24, 24, 0, 0, 0}, {370, 75, 87, 109, 0, 0, 0}, {373, 117, 42, 42, 0, 0, 0}, {375, 251, 140, 140, 0, 0, 0}, {380, 232, 20, 20, 0, 0, 0}, {385, 147, 133, 133, 3, 2, 3}, {386, 132, 16, 16, 3, 4, 5}, {387, 4, 72, 72, 3, 4, 5}, {388, 8, 37, 37, 3, 32, 33}, {390, 156, 238, 238, 0, 0, 0}, {395, 0, 212, 212, 0, 0, 0}, {396, 129, 156, 156, 0, 0, 0}, {397, 182, 108, 108, 0, 0, 0}, {400, 110, 254, 254, 3, 4, 5}, {401, 183, 6, 6, 3, 4, 5}, {410, 160, 53, 53, 0, 0, 0}, {411, 106, 3, 3, 0, 0, 0}, {412, 33, 6, 6, 3, 4, 5}, {413, 77, 7, 7, 3, 4, 5}, {414, 109, 16, 16, 0, 0, 0}, {415, 161, 16, 16, 0, 0, 0}, {435, 134, 46, 46, 0, 0, 0}, {436, 193, 9, 9, 0, 0, 0}, {437, 30, 1, 1, 0, 0, 0}, {510, 245, 106, 106, 0, 0, 0}, {511, 28, 71, 71, 0, 0, 0}, {9000, 113, 137, 137, 0, 0, 0}, {9005, 117, 34, 34, 0, 0, 0}, {12900, 114, 44, 44, 3, 0, 1}, {12901, 254, 59, 59, 3, 30, 31}, {12902, 140, 53, 53, 3, 4, 5}, {12903, 249, 46, 46, 3, 0, 1}, {12904, 77, 54, 54, 3, 28, 29}, {12905, 49, 43, 43, 3, 0, 1}, {12915, 94, 249, 249, 3, 0, 1}, {12918, 139, 51, 51, 0, 0, 0}, {12919, 7, 18, 18, 3, 16, 17}, {12920, 20, 5, 5, 0, 0, 0}, {51000, 91, 103, 103, 0, 0, 0}, {51100, 86, 24, 24, 0, 0, 0}, {51101, 147, 86, 86, 0, 0, 0}, {51102, 142, 44, 44, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 0;


// ENUM DEFINITIONS


/** @brief MAVLINK component type reported in HEARTBEAT message. */
enum class MAV_TYPE
{
    GENERIC=0, /* Generic micro air vehicle | */
    FIXED_WING=1, /* Fixed wing aircraft. | */
    QUADROTOR=2, /* Quadrotor | */
    COAXIAL=3, /* Coaxial helicopter | */
    HELICOPTER=4, /* Normal helicopter with tail rotor. | */
    ANTENNA_TRACKER=5, /* Ground installation | */
    GCS=6, /* Operator control unit / ground control station | */
    AIRSHIP=7, /* Airship, controlled | */
    FREE_BALLOON=8, /* Free balloon, uncontrolled | */
    ROCKET=9, /* Rocket | */
    GROUND_ROVER=10, /* Ground rover | */
    SURFACE_BOAT=11, /* Surface vessel, boat, ship | */
    SUBMARINE=12, /* Submarine | */
    HEXAROTOR=13, /* Hexarotor | */
    OCTOROTOR=14, /* Octorotor | */
    TRICOPTER=15, /* Tricopter | */
    FLAPPING_WING=16, /* Flapping wing | */
    KITE=17, /* Kite | */
    ONBOARD_CONTROLLER=18, /* Onboard companion controller | */
    VTOL_TAILSITTER_DUOROTOR=19, /* Two-rotor Tailsitter VTOL that additionally uses control surfaces in vertical operation. Note, value previously named MAV_TYPE_VTOL_DUOROTOR. | */
    VTOL_TAILSITTER_QUADROTOR=20, /* Quad-rotor Tailsitter VTOL using a V-shaped quad config in vertical operation. Note: value previously named MAV_TYPE_VTOL_QUADROTOR. | */
    VTOL_TILTROTOR=21, /* Tiltrotor VTOL. Fuselage and wings stay (nominally) horizontal in all flight phases. It able to tilt (some) rotors to provide thrust in cruise flight. | */
    VTOL_FIXEDROTOR=22, /* VTOL with separate fixed rotors for hover and cruise flight. Fuselage and wings stay (nominally) horizontal in all flight phases. | */
    VTOL_TAILSITTER=23, /* Tailsitter VTOL. Fuselage and wings orientation changes depending on flight phase: vertical for hover, horizontal for cruise. Use more specific VTOL MAV_TYPE_VTOL_DUOROTOR or MAV_TYPE_VTOL_QUADROTOR if appropriate. | */
    VTOL_TILTWING=24, /* Tiltwing VTOL. Fuselage stays horizontal in all flight phases. The whole wing, along with any attached engine, can tilt between vertical and horizontal mode. | */
    VTOL_RESERVED5=25, /* VTOL reserved 5 | */
    GIMBAL=26, /* Gimbal | */
    ADSB=27, /* ADSB system | */
    PARAFOIL=28, /* Steerable, nonrigid airfoil | */
    DODECAROTOR=29, /* Dodecarotor | */
    CAMERA=30, /* Camera | */
    CHARGING_STATION=31, /* Charging station | */
    FLARM=32, /* FLARM collision avoidance system | */
    SERVO=33, /* Servo | */
    ODID=34, /* Open Drone ID. See https://mavlink.io/en/services/opendroneid.html. | */
    DECAROTOR=35, /* Decarotor | */
    BATTERY=36, /* Battery | */
    PARACHUTE=37, /* Parachute | */
    LOG=38, /* Log | */
    OSD=39, /* OSD | */
    IMU=40, /* IMU | */
    GPS=41, /* GPS | */
    WINCH=42, /* Winch | */
    GENERIC_MULTIROTOR=43, /* Generic multirotor that does not fit into a specific type or whose type is unknown | */
    GENERIC_COMPONENT=50, /* Generic component which implements the generic component attribute discovery and control interface through mavlink parameter exchange. | */
};

//! MAV_TYPE ENUM_END
constexpr auto MAV_TYPE_ENUM_END = 51;

/** @brief Micro air vehicle / autopilot classes. This identifies the individual model. */
enum class MAV_AUTOPILOT
{
    GENERIC=0, /* Generic autopilot, full support for everything | */
    RESERVED=1, /* Reserved for future use. | */
    SLUGS=2, /* SLUGS autopilot, http://slugsuav.soe.ucsc.edu | */
    ARDUPILOTMEGA=3, /* ArduPilot - Plane/Copter/Rover/Sub/Tracker, https://ardupilot.org | */
    OPENPILOT=4, /* OpenPilot, http://openpilot.org | */
    GENERIC_WAYPOINTS_ONLY=5, /* Generic autopilot only supporting simple waypoints | */
    GENERIC_WAYPOINTS_AND_SIMPLE_NAVIGATION_ONLY=6, /* Generic autopilot supporting waypoints and other simple navigation commands | */
    GENERIC_MISSION_FULL=7, /* Generic autopilot supporting the full mission command set | */
    INVALID=8, /* No valid autopilot, e.g. a GCS or other MAVLink component | */
    PPZ=9, /* PPZ UAV - http://nongnu.org/paparazzi | */
    UDB=10, /* UAV Dev Board | */
    FP=11, /* FlexiPilot | */
    PX4=12, /* PX4 Autopilot - http://px4.io/ | */
    SMACCMPILOT=13, /* SMACCMPilot - http://smaccmpilot.org | */
    AUTOQUAD=14, /* AutoQuad -- http://autoquad.org | */
    ARMAZILA=15, /* Armazila -- http://armazila.com | */
    AEROB=16, /* Aerob -- http://aerob.ru | */
    ASLUAV=17, /* ASLUAV autopilot -- http://www.asl.ethz.ch | */
    SMARTAP=18, /* SmartAP Autopilot - http://sky-drones.com | */
    AIRRAILS=19, /* AirRails - http://uaventure.com | */
    REFLEX=20, /* Fusion Reflex - https://fusion.engineering | */
    SKYDIO=21, /* Skydio - https://www.skydio.com/ | */
    SHIELD_AI=22, /* Shield AI - https://shield.ai/ | */
};

//! MAV_AUTOPILOT ENUM_END
constexpr auto MAV_AUTOPILOT_ENUM_END = 23;

/** @brief Component ids (values) for the different types and instances of onboard hardware/software that might make up a MAVLink system (autopilot, cameras, servos, GPS systems, avoidance systems etc.).
      Components must use the appropriate ID in their source address when sending messages. Components can also use IDs to determine if they are the intended recipient of an incoming message. The MAV_COMP_ID_ALL value is used to indicate messages that must be processed by all components.
      When creating new entries, components that can have multiple instances (e.g. cameras, servos etc.) should be allocated sequential values. An appropriate number of values should be left free after these components to allow the number of instances to be expanded. */
enum class MAV_COMPONENT
{
    COMP_ID_ALL=0, /* Target id (target_component) used to broadcast messages to all components of the receiving system. Components should attempt to process messages with this component ID and forward to components on any other interfaces. Note: This is not a valid *source* component id for a message. | */
    COMP_ID_AUTOPILOT1=1, /* System flight controller component ("autopilot"). Only one autopilot is expected in a particular system. | */
    COMP_ID_USER1=25, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER2=26, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER3=27, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER4=28, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER5=29, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER6=30, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER7=31, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER8=32, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER9=33, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER10=34, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER11=35, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER12=36, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER13=37, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER14=38, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER15=39, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER16=40, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER17=41, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER18=42, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER19=43, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER20=44, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER21=45, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER22=46, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER23=47, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER24=48, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER25=49, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER26=50, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER27=51, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER28=52, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER29=53, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER30=54, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER31=55, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER32=56, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER33=57, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER34=58, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER35=59, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER36=60, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER37=61, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER38=62, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER39=63, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER40=64, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER41=65, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER42=66, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER43=67, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_TELEMETRY_RADIO=68, /* Telemetry radio (e.g. SiK radio, or other component that emits RADIO_STATUS messages). | */
    COMP_ID_USER45=69, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER46=70, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER47=71, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER48=72, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER49=73, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER50=74, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER51=75, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER52=76, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER53=77, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER54=78, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER55=79, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER56=80, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER57=81, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER58=82, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER59=83, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER60=84, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER61=85, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER62=86, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER63=87, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER64=88, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER65=89, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER66=90, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER67=91, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER68=92, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER69=93, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER70=94, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER71=95, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER72=96, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER73=97, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER74=98, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_USER75=99, /* Id for a component on privately managed MAVLink network. Can be used for any purpose but may not be published by components outside of the private network. | */
    COMP_ID_CAMERA=100, /* Camera #1. | */
    COMP_ID_CAMERA2=101, /* Camera #2. | */
    COMP_ID_CAMERA3=102, /* Camera #3. | */
    COMP_ID_CAMERA4=103, /* Camera #4. | */
    COMP_ID_CAMERA5=104, /* Camera #5. | */
    COMP_ID_CAMERA6=105, /* Camera #6. | */
    COMP_ID_SERVO1=140, /* Servo #1. | */
    COMP_ID_SERVO2=141, /* Servo #2. | */
    COMP_ID_SERVO3=142, /* Servo #3. | */
    COMP_ID_SERVO4=143, /* Servo #4. | */
    COMP_ID_SERVO5=144, /* Servo #5. | */
    COMP_ID_SERVO6=145, /* Servo #6. | */
    COMP_ID_SERVO7=146, /* Servo #7. | */
    COMP_ID_SERVO8=147, /* Servo #8. | */
    COMP_ID_SERVO9=148, /* Servo #9. | */
    COMP_ID_SERVO10=149, /* Servo #10. | */
    COMP_ID_SERVO11=150, /* Servo #11. | */
    COMP_ID_SERVO12=151, /* Servo #12. | */
    COMP_ID_SERVO13=152, /* Servo #13. | */
    COMP_ID_SERVO14=153, /* Servo #14. | */
    COMP_ID_GIMBAL=154, /* Gimbal #1. | */
    COMP_ID_LOG=155, /* Logging component. | */
    COMP_ID_ADSB=156, /* Automatic Dependent Surveillance-Broadcast (ADS-B) component. | */
    COMP_ID_OSD=157, /* On Screen Display (OSD) devices for video links. | */
    COMP_ID_PERIPHERAL=158, /* Generic autopilot peripheral component ID. Meant for devices that do not implement the parameter microservice. | */
    COMP_ID_QX1_GIMBAL=159, /* Gimbal ID for QX1. | */
    COMP_ID_FLARM=160, /* FLARM collision alert component. | */
    COMP_ID_PARACHUTE=161, /* Parachute component. | */
    COMP_ID_WINCH=169, /* Winch component. | */
    COMP_ID_GIMBAL2=171, /* Gimbal #2. | */
    COMP_ID_GIMBAL3=172, /* Gimbal #3. | */
    COMP_ID_GIMBAL4=173, /* Gimbal #4 | */
    COMP_ID_GIMBAL5=174, /* Gimbal #5. | */
    COMP_ID_GIMBAL6=175, /* Gimbal #6. | */
    COMP_ID_BATTERY=180, /* Battery #1. | */
    COMP_ID_BATTERY2=181, /* Battery #2. | */
    COMP_ID_MAVCAN=189, /* CAN over MAVLink client. | */
    COMP_ID_MISSIONPLANNER=190, /* Component that can generate/supply a mission flight plan (e.g. GCS or developer API). | */
    COMP_ID_ONBOARD_COMPUTER=191, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
    COMP_ID_ONBOARD_COMPUTER2=192, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
    COMP_ID_ONBOARD_COMPUTER3=193, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
    COMP_ID_ONBOARD_COMPUTER4=194, /* Component that lives on the onboard computer (companion computer) and has some generic functionalities, such as settings system parameters and monitoring the status of some processes that don't directly speak mavlink and so on. | */
    COMP_ID_PATHPLANNER=195, /* Component that finds an optimal path between points based on a certain constraint (e.g. minimum snap, shortest path, cost, etc.). | */
    COMP_ID_OBSTACLE_AVOIDANCE=196, /* Component that plans a collision free path between two points. | */
    COMP_ID_VISUAL_INERTIAL_ODOMETRY=197, /* Component that provides position estimates using VIO techniques. | */
    COMP_ID_PAIRING_MANAGER=198, /* Component that manages pairing of vehicle and GCS. | */
    COMP_ID_AUTONOMY_ENGINE=199, /* Component that manages autonomy behaviors/subsystems above and beyond those implemented by the autopilot (MAV_COMP_ID_AUTOPILOT1). Managed subsystems could include Kalman Filters integrating sensors not interfaced to the autopilot, obstacle avoidance, path planning, vision systems and other sensors. The autonomy engine may implement a superset of the functionality available from other seldom-used components such as MAV_COMP_ID_OBSTACLE_AVOIDANCE, MAV_COMP_ID_PATHPLANNER, MAV_COMP_ID_OBSTACLE_AVOIDANCE, and MAV_COMP_ID_ONBOARD_COMPUTER. | */
    COMP_ID_IMU=200, /* Inertial Measurement Unit (IMU) #1. | */
    COMP_ID_IMU_2=201, /* Inertial Measurement Unit (IMU) #2. | */
    COMP_ID_IMU_3=202, /* Inertial Measurement Unit (IMU) #3. | */
    COMP_ID_GPS=220, /* GPS #1. | */
    COMP_ID_GPS2=221, /* GPS #2. | */
    COMP_ID_ODID_TXRX_1=236, /* Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet). | */
    COMP_ID_ODID_TXRX_2=237, /* Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet). | */
    COMP_ID_ODID_TXRX_3=238, /* Open Drone ID transmitter/receiver (Bluetooth/WiFi/Internet). | */
    COMP_ID_UDP_BRIDGE=240, /* Component to bridge MAVLink to UDP (i.e. from a UART). | */
    COMP_ID_UART_BRIDGE=241, /* Component to bridge to UART (i.e. from UDP). | */
    COMP_ID_TUNNEL_NODE=242, /* Component handling TUNNEL messages (e.g. vendor specific GUI of a component). | */
    COMP_ID_SYSTEM_CONTROL=250, /* Deprecated, don't use. Component for handling system messages (e.g. to ARM, takeoff, etc.). | */
    COMP_ID_MONOLITHIC=254, /* A single component which presents many attributes and capabilities which prevent it from being binned into any of the other IDs in this enum. For context, refer to the monolithic generic component example in air-iop documentation release 1.2 | */
};

//! MAV_COMPONENT ENUM_END
constexpr auto MAV_COMPONENT_ENUM_END = 255;

/** @brief Bitmask of (optional) autopilot capabilities (64 bit). If a bit is set, the autopilot supports this capability. */
enum class MAV_PROTOCOL_CAPABILITY
{
    MISSION_FLOAT=1, /* Autopilot supports the MISSION_ITEM float message type.
          Note that MISSION_ITEM is deprecated, and autopilots should use MISSION_INT instead.
         | */
    PARAM_FLOAT=2, /* Autopilot supports the new param float message type. | */
    MISSION_INT=4, /* Autopilot supports MISSION_ITEM_INT scaled integer message type.
          Note that this flag must always be set if missions are supported, because missions must always use MISSION_ITEM_INT (rather than MISSION_ITEM, which is deprecated).
         | */
    COMMAND_INT=8, /* Autopilot supports COMMAND_INT scaled integer message type. | */
    PARAM_ENCODE_BYTEWISE=16, /* Parameter protocol uses byte-wise encoding of parameter values into param_value (float) fields: https://mavlink.io/en/services/parameter.html#parameter-encoding.
          Note that either this flag or MAV_PROTOCOL_CAPABILITY_PARAM_ENCODE_C_CAST should be set if the parameter protocol is supported.
         | */
    FTP=32, /* Autopilot supports the File Transfer Protocol v1: https://mavlink.io/en/services/ftp.html. | */
    SET_ATTITUDE_TARGET=64, /* Autopilot supports commanding attitude offboard. | */
    SET_POSITION_TARGET_LOCAL_NED=128, /* Autopilot supports commanding position and velocity targets in local NED frame. | */
    SET_POSITION_TARGET_GLOBAL_INT=256, /* Autopilot supports commanding position and velocity targets in global scaled integers. | */
    TERRAIN=512, /* Autopilot supports terrain protocol / data handling. | */
    RESERVED3=1024, /* Reserved for future use. | */
    FLIGHT_TERMINATION=2048, /* Autopilot supports the MAV_CMD_DO_FLIGHTTERMINATION command (flight termination). | */
    COMPASS_CALIBRATION=4096, /* Autopilot supports onboard compass calibration. | */
    MAVLINK2=8192, /* Autopilot supports MAVLink version 2. | */
    MISSION_FENCE=16384, /* Autopilot supports mission fence protocol. | */
    MISSION_RALLY=32768, /* Autopilot supports mission rally point protocol. | */
    RESERVED2=65536, /* Reserved for future use. | */
    PARAM_ENCODE_C_CAST=131072, /* Parameter protocol uses C-cast of parameter values to set the param_value (float) fields: https://mavlink.io/en/services/parameter.html#parameter-encoding.
          Note that either this flag or MAV_PROTOCOL_CAPABILITY_PARAM_ENCODE_BYTEWISE should be set if the parameter protocol is supported.
         | */
    INDOOR_OBSTACLE_AVOIDANCE=262144, /* Autopilot is capable of indoor obstacle avoidance. The obstacle visualization range (i.e. omnidirectional or single direction) is not determined by this flag and is system specific. | */
    OUTDOOR_OBSTACLE_AVOIDANCE=524288, /* Autopilot is capable of outdoor obstacle avoidance. The obstacle visualization range (i.e. omnidirectional or single direction) is not determined by this flag and is system specific. | */
    VIO_AUTONOMOUS_NAVIGATION=1048576, /* Autopilot is capable of autonomous navigation using Visual-Inertial Odometry algorithms and/or subsystems. | */
    AUTONOMOUS_EXPLORATION=2097152, /* Autopilot is capable of autonomous exploration tasks in indoor/outdoor environments. This necessarily means that the vehicle is capable of autonomous navigation and obstacle avoidance. | */
};

//! MAV_PROTOCOL_CAPABILITY ENUM_END
constexpr auto MAV_PROTOCOL_CAPABILITY_ENUM_END = 2097153;

/** @brief Commands to be executed by the MAV. They can be executed on user request, or as part of a mission script. If the action is used in a mission, the parameter mapping to the waypoint/mission message is as follows: Param 1, Param 2, Param 3, Param 4, X: Param 5, Y:Param 6, Z:Param 7. This command list is similar what ARINC 424 is for commercial aircraft: A data format how to interpret waypoint/mission data. NaN and INT32_MAX may be used in float/integer params (respectively) to indicate optional/default values (e.g. to use the component's current yaw or latitude rather than a specific value). See https://mavlink.io/en/guide/xml_schema.html#MAV_CMD for information about the structure of the MAV_CMD entries */
enum class MAV_CMD
{
    NAV_WAYPOINT=16, /* Navigate to waypoint. This is intended for use in missions (for guided commands outside of missions use MAV_CMD_DO_REPOSITION). |Hold time. (ignored by fixed wing, time to stay at waypoint for rotary wing)| Acceptance radius (if the sphere with this radius is hit, the waypoint counts as reached)| 0 to pass through the WP, if > 0 radius to pass by WP. Positive value for clockwise orbit, negative value for counter-clockwise orbit. Allows trajectory control.| Desired yaw angle at waypoint (rotary wing). NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
    NAV_LOITER_UNLIM=17, /* Loiter around this waypoint an unlimited amount of time |Empty| Empty| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, else counter-clockwise| Desired yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
    NAV_LOITER_TURNS=18, /* Loiter around this waypoint for X turns |Number of turns.| Leave loiter circle only once heading towards the next waypoint (0 = False)| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, else counter-clockwise| Loiter circle exit location and/or path to next waypoint ("xtrack") for forward-only moving vehicles (not multicopters). 0 for the vehicle to converge towards the center xtrack when it leaves the loiter (the line between the centers of the current and next waypoint), 1 to converge to the direct line between the location that the vehicle exits the loiter radius and the next waypoint. Otherwise the angle (in degrees) between the tangent of the loiter circle and the center xtrack at which the vehicle must leave the loiter (and converge to the center xtrack). NaN to use the current system default xtrack behaviour.| Latitude| Longitude| Altitude|  */
    NAV_LOITER_TIME=19, /* Loiter at the specified latitude, longitude and altitude for a certain amount of time. Multicopter vehicles stop at the point (within a vehicle-specific acceptance radius). Forward-only moving vehicles (e.g. fixed-wing) circle the point with the specified radius/direction. If the Heading Required parameter (2) is non-zero forward moving aircraft will only leave the loiter circle once heading towards the next waypoint. |Loiter time (only starts once Lat, Lon and Alt is reached).| Leave loiter circle only once heading towards the next waypoint (0 = False)| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, else counter-clockwise.| Loiter circle exit location and/or path to next waypoint ("xtrack") for forward-only moving vehicles (not multicopters). 0 for the vehicle to converge towards the center xtrack when it leaves the loiter (the line between the centers of the current and next waypoint), 1 to converge to the direct line between the location that the vehicle exits the loiter radius and the next waypoint. Otherwise the angle (in degrees) between the tangent of the loiter circle and the center xtrack at which the vehicle must leave the loiter (and converge to the center xtrack). NaN to use the current system default xtrack behaviour.| Latitude| Longitude| Altitude|  */
    NAV_RETURN_TO_LAUNCH=20, /* Return to launch location |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
    NAV_LAND=21, /* Land at location. |Minimum target altitude if landing is aborted (0 = undefined/use system default).| Precision land mode.| Empty.| Desired yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude.| Longitude.| Landing altitude (ground level in current frame).|  */
    NAV_TAKEOFF=22, /* Takeoff from ground / hand. Vehicles that support multiple takeoff modes (e.g. VTOL quadplane) should take off using the currently configured mode. |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Empty| Yaw angle (if magnetometer present), ignored without magnetometer. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
    NAV_LAND_LOCAL=23, /* Land at local position (local frame only) |Landing target number (if available)| Maximum accepted offset from desired landing position - computed magnitude from spherical coordinates: d = sqrt(x^2 + y^2 + z^2), which gives the maximum accepted distance between the desired landing position and the position where the vehicle is about to land| Landing descend rate| Desired yaw angle| Y-axis position| X-axis position| Z-axis / ground level position|  */
    NAV_TAKEOFF_LOCAL=24, /* Takeoff from local position (local frame only) |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Takeoff ascend rate| Yaw angle (if magnetometer or another yaw estimation source present), ignored without one of these| Y-axis position| X-axis position| Z-axis position|  */
    NAV_FOLLOW=25, /* Vehicle following, i.e. this waypoint represents the position of a moving vehicle |Following logic to use (e.g. loitering or sinusoidal following) - depends on specific autopilot implementation| Ground speed of vehicle to be followed| Radius around waypoint. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|  */
    NAV_CONTINUE_AND_CHANGE_ALT=30, /* Continue on the current course and climb/descend to specified altitude.  When the altitude is reached continue to the next command (i.e., don't proceed to the next command until the desired altitude is reached. |Climb or Descend (0 = Neutral, command completes when within 5m of this command's altitude, 1 = Climbing, command completes when at or above this command's altitude, 2 = Descending, command completes when at or below this command's altitude.| Empty| Empty| Empty| Empty| Empty| Desired altitude|  */
    NAV_LOITER_TO_ALT=31, /* Begin loiter at the specified Latitude and Longitude.  If Lat=Lon=0, then loiter at the current position.  Don't consider the navigation command complete (don't leave loiter) until the altitude has been reached. Additionally, if the Heading Required parameter is non-zero the aircraft will not leave the loiter until heading toward the next waypoint. |Leave loiter circle only once heading towards the next waypoint (0 = False)| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, negative counter-clockwise, 0 means no change to standard loiter.| Empty| Loiter circle exit location and/or path to next waypoint ("xtrack") for forward-only moving vehicles (not multicopters). 0 for the vehicle to converge towards the center xtrack when it leaves the loiter (the line between the centers of the current and next waypoint), 1 to converge to the direct line between the location that the vehicle exits the loiter radius and the next waypoint. Otherwise the angle (in degrees) between the tangent of the loiter circle and the center xtrack at which the vehicle must leave the loiter (and converge to the center xtrack). NaN to use the current system default xtrack behaviour.| Latitude| Longitude| Altitude|  */
    DO_FOLLOW=32, /* Begin following a target |System ID (of the FOLLOW_TARGET beacon). Send 0 to disable follow-me and return to the default position hold mode.| Reserved| Reserved| Altitude mode: 0: Keep current altitude, 1: keep altitude difference to target, 2: go to a fixed altitude above home.| Altitude above home. (used if mode=2)| Reserved| Time to land in which the MAV should go to the default position hold mode after a message RX timeout.|  */
    DO_FOLLOW_REPOSITION=33, /* Reposition the MAV after a follow target command has been sent |Camera q1 (where 0 is on the ray from the camera to the tracking device)| Camera q2| Camera q3| Camera q4| altitude offset from target| X offset from target| Y offset from target|  */
    DO_ORBIT=34, /* Start orbiting on the circumference of a circle defined by the parameters. Setting values to NaN/INT32_MAX (as appropriate) results in using defaults. |Radius of the circle. Positive: orbit clockwise. Negative: orbit counter-clockwise. NaN: Use vehicle default radius, or current radius if already orbiting.| Tangential Velocity. NaN: Use vehicle default velocity, or current velocity if already orbiting.| Yaw behavior of the vehicle.| Orbit around the centre point for this many radians (i.e. for a three-quarter orbit set 270*Pi/180). 0: Orbit forever. NaN: Use vehicle default, or current value if already orbiting.| Center point latitude (if no MAV_FRAME specified) / X coordinate according to MAV_FRAME. INT32_MAX (or NaN if sent in COMMAND_LONG): Use current vehicle position, or current center if already orbiting.| Center point longitude (if no MAV_FRAME specified) / Y coordinate according to MAV_FRAME. INT32_MAX (or NaN if sent in COMMAND_LONG): Use current vehicle position, or current center if already orbiting.| Center point altitude (MSL) (if no MAV_FRAME specified) / Z coordinate according to MAV_FRAME. NaN: Use current vehicle altitude.|  */
    DO_FIGURE_EIGHT=35, /* Fly a figure eight path as defined by the parameters.
          Set parameters to NaN/INT32_MAX (as appropriate) to use system-default values.
          The command is intended for fixed wing vehicles (and VTOL hybrids flying in fixed-wing mode), allowing POI tracking for gimbals that don't support infinite rotation.
          This command only defines the flight path. Speed should be set independently (use e.g. MAV_CMD_DO_CHANGE_SPEED).
          Yaw and other degrees of freedom are not specified, and will be flight-stack specific (on vehicles where they can be controlled independent of the heading).
         |Major axis radius of the figure eight. Positive: orbit the north circle clockwise. Negative: orbit the north circle counter-clockwise.
        NaN: The radius will be set to 2.5 times the minor radius and direction is clockwise.
        Must be greater or equal to two times the minor radius for feasible values.| Minor axis radius of the figure eight. Defines the radius of the two circles that make up the figure. Negative value has no effect.
        NaN: The radius will be set to the default loiter radius.| Reserved (default:NaN)| Orientation of the figure eight major axis with respect to true north (range: [-pi,pi]). NaN: use default orientation aligned to true north.| Center point latitude/X coordinate according to MAV_FRAME. If no MAV_FRAME specified, MAV_FRAME_GLOBAL is assumed.
        INT32_MAX or NaN: Use current vehicle position, or current center if already loitering.| Center point longitude/Y coordinate according to MAV_FRAME. If no MAV_FRAME specified, MAV_FRAME_GLOBAL is assumed.
        INT32_MAX or NaN: Use current vehicle position, or current center if already loitering.| Center point altitude MSL/Z coordinate according to MAV_FRAME. If no MAV_FRAME specified, MAV_FRAME_GLOBAL is assumed.
        INT32_MAX or NaN: Use current vehicle altitude.|  */
    NAV_ROI=80, /* Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode.| Waypoint index/ target ID. (see MAV_ROI enum)| ROI index (allows a vehicle to manage multiple ROI's)| Empty| x the location of the fixed ROI (see MAV_FRAME)| y| z|  */
    NAV_PATHPLANNING=81, /* Control autonomous path planning on the MAV. |0: Disable local obstacle avoidance / local path planning (without resetting map), 1: Enable local path planning, 2: Enable and reset local path planning| 0: Disable full path planning (without resetting map), 1: Enable, 2: Enable and reset map/occupancy grid, 3: Enable and reset planned route, but not occupancy grid| Empty| Yaw angle at goal| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|  */
    NAV_SPLINE_WAYPOINT=82, /* Navigate to waypoint using a spline path. |Hold time. (ignored by fixed wing, time to stay at waypoint for rotary wing)| Empty| Empty| Empty| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|  */
    NAV_VTOL_TAKEOFF=84, /* Takeoff from ground using VTOL mode, and transition to forward flight with specified heading. The command should be ignored by vehicles that dont support both VTOL and fixed-wing flight (multicopters, boats,etc.). |Empty| Front transition heading.| Empty| Yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
    NAV_VTOL_LAND=85, /* Land using VTOL mode |Landing behaviour.| Empty| Approach altitude (with the same reference as the Altitude field). NaN if unspecified.| Yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude (ground level) relative to the current coordinate frame. NaN to use system default landing altitude (ignore value).|  */
    NAV_GUIDED_ENABLE=92, /* hand control over to an external controller |On / Off (> 0.5f on)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    NAV_DELAY=93, /* Delay the next navigation command a number of seconds or until a specified time |Delay (-1 to enable time-of-day fields)| hour (24h format, UTC, -1 to ignore)| minute (24h format, UTC, -1 to ignore)| second (24h format, UTC, -1 to ignore)| Empty| Empty| Empty|  */
    NAV_PAYLOAD_PLACE=94, /* Descend and place payload. Vehicle moves to specified location, descends until it detects a hanging payload has reached the ground, and then releases the payload. If ground is not detected before the reaching the maximum descent value (param1), the command will complete without releasing the payload. |Maximum distance to descend.| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
    NAV_LAST=95, /* NOP - This command is only used to mark the upper limit of the NAV/ACTION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
    CONDITION_DELAY=112, /* Delay mission state machine. |Delay| Empty| Empty| Empty| Empty| Empty| Empty|  */
    CONDITION_CHANGE_ALT=113, /* Ascend/descend to target altitude at specified rate. Delay mission state machine until desired altitude reached. |Descent / Ascend rate.| Empty| Empty| Empty| Empty| Empty| Target Altitude|  */
    CONDITION_DISTANCE=114, /* Delay mission state machine until within desired distance of next NAV point. |Distance.| Empty| Empty| Empty| Empty| Empty| Empty|  */
    CONDITION_YAW=115, /* Reach a certain target angle. |target angle, 0 is north| angular speed| direction: -1: counter clockwise, 1: clockwise| 0: absolute angle, 1: relative offset| Empty| Empty| Empty|  */
    CONDITION_LAST=159, /* NOP - This command is only used to mark the upper limit of the CONDITION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_SET_MODE=176, /* Set system mode. |Mode| Custom mode - this is system specific, please refer to the individual autopilot specifications for details.| Custom sub mode - this is system specific, please refer to the individual autopilot specifications for details.| Empty| Empty| Empty| Empty|  */
    DO_JUMP=177, /* Jump to the desired command in the mission list.  Repeat this action only the specified number of times |Sequence number| Repeat count| Empty| Empty| Empty| Empty| Empty|  */
    DO_CHANGE_SPEED=178, /* Change speed and/or throttle set points. The value persists until it is overridden or there is a mode change. |Speed type (0=Airspeed, 1=Ground Speed, 2=Climb Speed, 3=Descent Speed)| Speed (-1 indicates no change, -2 indicates return to default vehicle speed)| Throttle (-1 indicates no change, -2 indicates return to default vehicle throttle value)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    DO_SET_HOME=179, /* 
          Sets the home position to either to the current position or a specified position.
          The home position is the default position that the system will return to and land on.
          The position is set automatically by the system during the takeoff (and may also be set using this command).
          Note: the current home position may be emitted in a HOME_POSITION message on request (using MAV_CMD_REQUEST_MESSAGE with param1=242).
         |Use current (1=use current location, 0=use specified location)| Empty| Empty| Yaw angle. NaN to use default heading| Latitude| Longitude| Altitude|  */
    DO_SET_PARAMETER=180, /* Set a system parameter.  Caution!  Use of this command requires knowledge of the numeric enumeration value of the parameter. |Parameter number| Parameter value| Empty| Empty| Empty| Empty| Empty|  */
    DO_SET_RELAY=181, /* Set a relay to a condition. |Relay instance number.| Setting. (1=on, 0=off, others possible depending on system hardware)| Empty| Empty| Empty| Empty| Empty|  */
    DO_REPEAT_RELAY=182, /* Cycle a relay on and off for a desired number of cycles with a desired period. |Relay instance number.| Cycle count.| Cycle time.| Empty| Empty| Empty| Empty|  */
    DO_SET_SERVO=183, /* Set a servo to a desired PWM value. |Servo instance number.| Pulse Width Modulation.| Empty| Empty| Empty| Empty| Empty|  */
    DO_REPEAT_SERVO=184, /* Cycle a between its nominal setting and a desired PWM for a desired number of cycles with a desired period. |Servo instance number.| Pulse Width Modulation.| Cycle count.| Cycle time.| Empty| Empty| Empty|  */
    DO_FLIGHTTERMINATION=185, /* Terminate flight immediately.
          Flight termination immediately and irreversably terminates the current flight, returning the vehicle to ground.
          The vehicle will ignore RC or other input until it has been power-cycled.
          Termination may trigger safety measures, including: disabling motors and deployment of parachute on multicopters, and setting flight surfaces to initiate a landing pattern on fixed-wing).
          On multicopters without a parachute it may trigger a crash landing.
          Support for this command can be tested using the protocol bit: MAV_PROTOCOL_CAPABILITY_FLIGHT_TERMINATION.
          Support for this command can also be tested by sending the command with param1=0 (< 0.5); the ACK should be either MAV_RESULT_FAILED or MAV_RESULT_UNSUPPORTED.
         |Flight termination activated if > 0.5. Otherwise not activated and ACK with MAV_RESULT_FAILED.| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_CHANGE_ALTITUDE=186, /* Change altitude set point. |Altitude.| Frame of new altitude.| Empty| Empty| Empty| Empty| Empty|  */
    DO_SET_ACTUATOR=187, /* Sets actuators (e.g. servos) to a desired value. The actuator numbers are mapped to specific outputs (e.g. on any MAIN or AUX PWM or UAVCAN) using a flight-stack specific mechanism (i.e. a parameter). |Actuator 1 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 2 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 3 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 4 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 5 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 6 value, scaled from [-1 to 1]. NaN to ignore.| Index of actuator set (i.e if set to 1, Actuator 1 becomes Actuator 7)|  */
    DO_LAND_START=189, /* Mission command to perform a landing. This is used as a marker in a mission to tell the autopilot where a sequence of mission items that represents a landing starts.
	  It may also be sent via a COMMAND_LONG to trigger a landing, in which case the nearest (geographically) landing sequence in the mission will be used.
	  The Latitude/Longitude/Altitude is optional, and may be set to 0 if not needed. If specified then it will be used to help find the closest landing sequence.
	 |Empty| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
    DO_RALLY_LAND=190, /* Mission command to perform a landing from a rally point. |Break altitude| Landing speed| Empty| Empty| Empty| Empty| Empty|  */
    DO_GO_AROUND=191, /* Mission command to safely abort an autonomous landing. |Altitude| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_REPOSITION=192, /* Reposition the vehicle to a specific WGS84 global position. This command is intended for guided commands (for missions use MAV_CMD_NAV_WAYPOINT instead). |Ground speed, less than 0 (-1) for default| Bitmask of option flags.| Loiter radius for planes. Positive values only, direction is controlled by Yaw value. A value of zero or NaN is ignored. | Yaw heading. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.). For planes indicates loiter direction (0: clockwise, 1: counter clockwise)| Latitude| Longitude| Altitude|  */
    DO_PAUSE_CONTINUE=193, /* If in a GPS controlled position mode, hold the current position or continue. |0: Pause current mission or reposition command, hold current position. 1: Continue mission. A VTOL capable vehicle should enter hover mode (multicopter and VTOL planes). A plane should loiter with the default loiter radius.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
    DO_SET_REVERSE=194, /* Set moving direction to forward or reverse. |Direction (0=Forward, 1=Reverse)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_SET_ROI_LOCATION=195, /* Sets the region of interest (ROI) to a location. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal is not to react to this message. |Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Empty| Empty| Empty| Latitude of ROI location| Longitude of ROI location| Altitude of ROI location|  */
    DO_SET_ROI_WPNEXT_OFFSET=196, /* Sets the region of interest (ROI) to be toward next waypoint, with optional pitch/roll/yaw offset. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal device is not to react to this message. |Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Empty| Empty| Empty| Pitch offset from next waypoint, positive pitching up| Roll offset from next waypoint, positive rolling to the right| Yaw offset from next waypoint, positive yawing to the right|  */
    DO_SET_ROI_NONE=197, /* Cancels any previous ROI command returning the vehicle/sensors to default flight characteristics. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal device is not to react to this message. After this command the gimbal manager should go back to manual input if available, and otherwise assume a neutral position. |Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_SET_ROI_SYSID=198, /* Mount tracks system with specified system ID. Determination of target vehicle position may be done with GLOBAL_POSITION_INT or any other means. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal device is not to react to this message. |System ID| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    DO_CONTROL_VIDEO=200, /* Control onboard camera system. |Camera ID (-1 for all)| Transmission: 0: disabled, 1: enabled compressed, 2: enabled raw| Transmission mode: 0: video stream, >0: single images every n seconds| Recording: 0: disabled, 1: enabled compressed, 2: enabled raw| Empty| Empty| Empty|  */
    DO_SET_ROI=201, /* Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode.| Waypoint index/ target ID (depends on param 1).| Region of interest index. (allows a vehicle to manage multiple ROI's)| Empty| MAV_ROI_WPNEXT: pitch offset from next waypoint, MAV_ROI_LOCATION: latitude| MAV_ROI_WPNEXT: roll offset from next waypoint, MAV_ROI_LOCATION: longitude| MAV_ROI_WPNEXT: yaw offset from next waypoint, MAV_ROI_LOCATION: altitude|  */
    DO_DIGICAM_CONFIGURE=202, /* Configure digital camera. This is a fallback message for systems that have not yet implemented PARAM_EXT_XXX messages and camera definition files (see https://mavlink.io/en/services/camera_def.html ). |Modes: P, TV, AV, M, Etc.| Shutter speed: Divisor number for one second.| Aperture: F stop number.| ISO number e.g. 80, 100, 200, Etc.| Exposure type enumerator.| Command Identity.| Main engine cut-off time before camera trigger. (0 means no cut-off)|  */
    DO_DIGICAM_CONTROL=203, /* Control digital camera. This is a fallback message for systems that have not yet implemented PARAM_EXT_XXX messages and camera definition files (see https://mavlink.io/en/services/camera_def.html ). |Session control e.g. show/hide lens| Zoom's absolute position| Zooming step value to offset zoom from the current position| Focus Locking, Unlocking or Re-locking| Shooting Command| Command Identity| Test shot identifier. If set to 1, image will only be captured, but not counted towards internal frame count.|  */
    DO_MOUNT_CONFIGURE=204, /* Mission command to configure a camera or antenna mount |Mount operation mode| stabilize roll? (1 = yes, 0 = no)| stabilize pitch? (1 = yes, 0 = no)| stabilize yaw? (1 = yes, 0 = no)| roll input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)| pitch input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)| yaw input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)|  */
    DO_MOUNT_CONTROL=205, /* Mission command to control a camera or antenna mount |pitch depending on mount mode (degrees or degrees/second depending on pitch input).| roll depending on mount mode (degrees or degrees/second depending on roll input).| yaw depending on mount mode (degrees or degrees/second depending on yaw input).| altitude depending on mount mode.| latitude, set if appropriate mount mode.| longitude, set if appropriate mount mode.| Mount mode.|  */
    DO_SET_CAM_TRIGG_DIST=206, /* Mission command to set camera trigger distance for this flight. The camera is triggered each time this distance is exceeded. This command can also be used to set the shutter integration time for the camera. |Camera trigger distance. 0 to stop triggering.| Camera shutter integration time. -1 or 0 to ignore| Trigger camera once immediately. (0 = no trigger, 1 = trigger)| Empty| Empty| Empty| Empty|  */
    DO_FENCE_ENABLE=207, /* Mission command to enable the geofence |enable? (0=disable, 1=enable, 2=disable_floor_only)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_PARACHUTE=208, /* Mission item/command to release a parachute or enable/disable auto release. |Action| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_MOTOR_TEST=209, /* Command to perform motor test. |Motor instance number (from 1 to max number of motors on the vehicle).| Throttle type (whether the Throttle Value in param3 is a percentage, PWM value, etc.)| Throttle value.| Timeout between tests that are run in sequence.| Motor count. Number of motors to test in sequence: 0/1=one motor, 2= two motors, etc. The Timeout (param4) is used between tests.| Motor test order.| Empty|  */
    DO_INVERTED_FLIGHT=210, /* Change to/from inverted flight. |Inverted flight. (0=normal, 1=inverted)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    DO_GRIPPER=211, /* Mission command to operate a gripper. |Gripper instance number.| Gripper action to perform.| Empty| Empty| Empty| Empty| Empty|  */
    DO_AUTOTUNE_ENABLE=212, /* Enable/disable autotune. |Enable (1: enable, 0:disable).| Specify which axis are autotuned. 0 indicates autopilot default settings.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
    NAV_SET_YAW_SPEED=213, /* Sets a desired vehicle turn angle and speed change. |Yaw angle to adjust steering by.| Speed.| Final angle. (0=absolute, 1=relative)| Empty| Empty| Empty| Empty|  */
    DO_SET_CAM_TRIGG_INTERVAL=214, /* Mission command to set camera trigger interval for this flight. If triggering is enabled, the camera is triggered each time this interval expires. This command can also be used to set the shutter integration time for the camera. |Camera trigger cycle time. -1 or 0 to ignore.| Camera shutter integration time. Should be less than trigger cycle time. -1 or 0 to ignore.| Empty| Empty| Empty| Empty| Empty|  */
    DO_MOUNT_CONTROL_QUAT=220, /* Mission command to control a camera or antenna mount, using a quaternion as reference. |quaternion param q1, w (1 in null-rotation)| quaternion param q2, x (0 in null-rotation)| quaternion param q3, y (0 in null-rotation)| quaternion param q4, z (0 in null-rotation)| Empty| Empty| Empty|  */
    DO_GUIDED_MASTER=221, /* set id of master controller |System ID| Component ID| Empty| Empty| Empty| Empty| Empty|  */
    DO_GUIDED_LIMITS=222, /* Set limits for external control |Timeout - maximum time that external controller will be allowed to control vehicle. 0 means no timeout.| Altitude (MSL) min - if vehicle moves below this alt, the command will be aborted and the mission will continue. 0 means no lower altitude limit.| Altitude (MSL) max - if vehicle moves above this alt, the command will be aborted and the mission will continue. 0 means no upper altitude limit.| Horizontal move limit - if vehicle moves more than this distance from its location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal move limit.| Empty| Empty| Empty|  */
    DO_ENGINE_CONTROL=223, /* Control vehicle engine. This is interpreted by the vehicles engine controller to change the target engine state. It is intended for vehicles with internal combustion engines |0: Stop engine, 1:Start Engine| 0: Warm start, 1:Cold start. Controls use of choke where applicable| Height delay. This is for commanding engine start only after the vehicle has gained the specified height. Used in VTOL vehicles during takeoff to start engine after the aircraft is off the ground. Zero for no delay.| Empty| Empty| Empty| Empty|  */
    DO_SET_MISSION_CURRENT=224, /* 
          Set the mission item with sequence number seq as the current item and emit MISSION_CURRENT (whether or not the mission number changed).
          If a mission is currently being executed, the system will continue to this new mission item on the shortest path, skipping any intermediate mission items.
	  Note that mission jump repeat counters are not reset unless param2 is set (see MAV_CMD_DO_JUMP param2).

          This command may trigger a mission state-machine change on some systems: for example from MISSION_STATE_NOT_STARTED or MISSION_STATE_PAUSED to MISSION_STATE_ACTIVE.
          If the system is in mission mode, on those systems this command might therefore start, restart or resume the mission.
          If the system is not in mission mode this command must not trigger a switch to mission mode.

          The mission may be "reset" using param2.
          Resetting sets jump counters to initial values (to reset counters without changing the current mission item set the param1 to `-1`).
          Resetting also explicitly changes a mission state of MISSION_STATE_COMPLETE to MISSION_STATE_PAUSED or MISSION_STATE_ACTIVE, potentially allowing it to resume when it is (next) in a mission mode.

	  The command will ACK with MAV_RESULT_FAILED if the sequence number is out of range (including if there is no mission item).
         |Mission sequence value to set. -1 for the current mission item (use to reset mission without changing current mission item).| Resets mission. 1: true, 0: false. Resets jump counters to initial values and changes mission state "completed" to be "active" or "paused".| Empty| Empty| Empty| Empty| Empty|  */
    DO_LAST=240, /* NOP - This command is only used to mark the upper limit of the DO commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
    PREFLIGHT_CALIBRATION=241, /* Trigger calibration. This command will be only accepted if in pre-flight mode. Except for Temperature Calibration, only one sensor should be set in a single message and all others should be zero. |1: gyro calibration, 3: gyro temperature calibration| 1: magnetometer calibration| 1: ground pressure calibration| 1: radio RC calibration, 2: RC trim calibration| 1: accelerometer calibration, 2: board level calibration, 3: accelerometer temperature calibration, 4: simple accelerometer calibration| 1: APM: compass/motor interference calibration (PX4: airspeed calibration, deprecated), 2: airspeed calibration| 1: ESC calibration, 3: barometer temperature calibration|  */
    PREFLIGHT_SET_SENSOR_OFFSETS=242, /* Set sensor offsets. This command will be only accepted if in pre-flight mode. |Sensor to adjust the offsets for: 0: gyros, 1: accelerometer, 2: magnetometer, 3: barometer, 4: optical flow, 5: second magnetometer, 6: third magnetometer| X axis offset (or generic dimension 1), in the sensor's raw units| Y axis offset (or generic dimension 2), in the sensor's raw units| Z axis offset (or generic dimension 3), in the sensor's raw units| Generic dimension 4, in the sensor's raw units| Generic dimension 5, in the sensor's raw units| Generic dimension 6, in the sensor's raw units|  */
    PREFLIGHT_UAVCAN=243, /* Trigger UAVCAN configuration (actuator ID assignment and direction mapping). Note that this maps to the legacy UAVCAN v0 function UAVCAN_ENUMERATE, which is intended to be executed just once during initial vehicle configuration (it is not a normal pre-flight command and has been poorly named). |1: Trigger actuator ID assignment and direction mapping. 0: Cancel command.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
    PREFLIGHT_STORAGE=245, /* Request storage of different parameter values and logs. This command will be only accepted if in pre-flight mode. |Action to perform on the persistent parameter storage| Action to perform on the persistent mission storage| Onboard logging: 0: Ignore, 1: Start default rate logging, -1: Stop logging, > 1: logging rate (e.g. set to 1000 for 1000 Hz logging)| Reserved| Empty| Empty| Empty|  */
    PREFLIGHT_REBOOT_SHUTDOWN=246, /* Request the reboot or shutdown of system components. |0: Do nothing for autopilot, 1: Reboot autopilot, 2: Shutdown autopilot, 3: Reboot autopilot and keep it in the bootloader until upgraded.| 0: Do nothing for onboard computer, 1: Reboot onboard computer, 2: Shutdown onboard computer, 3: Reboot onboard computer and keep it in the bootloader until upgraded.| 0: Do nothing for component, 1: Reboot component, 2: Shutdown component, 3: Reboot component and keep it in the bootloader until upgraded| MAVLink Component ID targeted in param3 (0 for all components).| Reserved (set to 0)| Reserved (set to 0)| WIP: ID (e.g. camera ID -1 for all IDs)|  */
    DO_UPGRADE=247, /* Request a target system to start an upgrade of one (or all) of its components.
          For example, the command might be sent to a companion computer to cause it to upgrade a connected flight controller.
          The system doing the upgrade will report progress using the normal command protocol sequence for a long running operation.
          Command protocol information: https://mavlink.io/en/services/command.html. |Component id of the component to be upgraded. If set to 0, all components should be upgraded.| 0: Do not reboot component after the action is executed, 1: Reboot component after the action is executed.| Reserved| Reserved| Reserved| Reserved| WIP: upgrade progress report rate (can be used for more granular control).|  */
    OVERRIDE_GOTO=252, /* Override current mission with command to pause mission, pause mission and move to position, continue/resume mission. When param 1 indicates that the mission is paused (MAV_GOTO_DO_HOLD), param 2 defines whether it holds in place or moves to another position. |MAV_GOTO_DO_HOLD: pause mission and either hold or move to specified position (depending on param2), MAV_GOTO_DO_CONTINUE: resume mission.| MAV_GOTO_HOLD_AT_CURRENT_POSITION: hold at current position, MAV_GOTO_HOLD_AT_SPECIFIED_POSITION: hold at specified position.| Coordinate frame of hold point.| Desired yaw angle.| Latitude/X position.| Longitude/Y position.| Altitude/Z position.|  */
    OBLIQUE_SURVEY=260, /* Mission command to set a Camera Auto Mount Pivoting Oblique Survey (Replaces CAM_TRIGG_DIST for this purpose). The camera is triggered each time this distance is exceeded, then the mount moves to the next position. Params 4~6 set-up the angle limits and number of positions for oblique survey, where mount-enabled vehicles automatically roll the camera between shots to emulate an oblique camera setup (providing an increased HFOV). This command can also be used to set the shutter integration time for the camera. |Camera trigger distance. 0 to stop triggering.| Camera shutter integration time. 0 to ignore| The minimum interval in which the camera is capable of taking subsequent pictures repeatedly. 0 to ignore.| Total number of roll positions at which the camera will capture photos (images captures spread evenly across the limits defined by param5).| Angle limits that the camera can be rolled to left and right of center.| Fixed pitch angle that the camera will hold in oblique mode if the mount is actuated in the pitch axis.| Empty|  */
    DO_SET_STANDARD_MODE=262, /* Enable the specified standard MAVLink mode.
          If the mode is not supported the vehicle should ACK with MAV_RESULT_FAILED.
         |The mode to set.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    MISSION_START=300, /* start running a mission |first_item: the first mission item to run| last_item:  the last mission item to run (after this item is run, the mission ends)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    GROUP_START=301, /* Define start of a group of mission items. When control reaches this command a GROUP_START message is emitted.
          The end of a group is marked using MAV_CMD_GROUP_END with the same group id.
          Group ids are expected, but not required, to iterate sequentially.
          Groups can be nested. |Mission-unique group id.
          Group id is limited because only 24 bit integer can be stored in 32 bit float.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    GROUP_END=302, /* Define end of a group of mission items. When control reaches this command a GROUP_END message is emitted.
          The start of the group is marked is marked using MAV_CMD_GROUP_START with the same group id.
          Group ids are expected, but not required, to iterate sequentially.
          Groups can be nested. |Mission-unique group id.
          Group id is limited because only 24 bit integer can be stored in 32 bit float.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    ACTUATOR_TEST=310, /* Actuator testing command. This is similar to MAV_CMD_DO_MOTOR_TEST but operates on the level of output functions, i.e. it is possible to test Motor1 independent from which output it is configured on. Autopilots typically refuse this command while armed. |Output value: 1 means maximum positive output, 0 to center servos or minimum motor thrust (expected to spin), -1 for maximum negative (if not supported by the motors, i.e. motor is not reversible, smaller than 0 maps to NaN). And NaN maps to disarmed (stop the motors).| Timeout after which the test command expires and the output is restored to the previous value. A timeout has to be set for safety reasons. A timeout of 0 means to restore the previous value immediately.| Reserved (default:0)| Reserved (default:0)| Actuator Output function| Reserved (default:0)| Reserved (default:0)|  */
    CONFIGURE_ACTUATOR=311, /* Actuator configuration command. |Actuator configuration action| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Actuator Output function| Reserved (default:0)| Reserved (default:0)|  */
    COMPONENT_ARM_DISARM=400, /* Arms / Disarms a component |0: disarm, 1: arm| 0: arm-disarm unless prevented by safety checks (i.e. when landed), 21196: force arming/disarming (e.g. allow arming to override preflight checks and disarming in flight)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    RUN_PREARM_CHECKS=401, /* Instructs a target system to run pre-arm checks.
          This allows preflight checks to be run on demand, which may be useful on systems that normally run them at low rate, or which do not trigger checks when the armable state might have changed.
          This command should return MAV_RESULT_ACCEPTED if it will run the checks.
          The results of the checks are usually then reported in SYS_STATUS messages (this is system-specific).
          The command should return MAV_RESULT_TEMPORARILY_REJECTED if the system is already armed.
         |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    ILLUMINATOR_ON_OFF=405, /* Turns illuminators ON/OFF. An illuminator is a light source that is used for lighting up dark areas external to the sytstem: e.g. a torch or searchlight (as opposed to a light source for illuminating the system itself, e.g. an indicator light). |0: Illuminators OFF, 1: Illuminators ON| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    GET_HOME_POSITION=410, /* Request the home position from the vehicle.
	  The vehicle will ACK the command and then emit the HOME_POSITION message. |Reserved| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
    INJECT_FAILURE=420, /* Inject artificial failure for testing purposes. Note that autopilots should implement an additional protection before accepting this command such as a specific param setting. |The unit which is affected by the failure.| The type how the failure manifests itself.| Instance affected by failure (0 to signal all).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    START_RX_PAIR=500, /* Starts receiver pairing. |0:Spektrum.| RC type.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    GET_MESSAGE_INTERVAL=510, /* 
          Request the interval between messages for a particular MAVLink message ID.
          The receiver should ACK the command and then emit its response in a MESSAGE_INTERVAL message.
         |The MAVLink message ID| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    SET_MESSAGE_INTERVAL=511, /* Set the interval between messages for a particular MAVLink message ID. This interface replaces REQUEST_DATA_STREAM. |The MAVLink message ID| The interval between two messages. -1: disable. 0: request default rate (which may be zero).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Target address of message stream (if message has target address fields). 0: Flight-stack default (recommended), 1: address of requestor, 2: broadcast.|  */
    REQUEST_MESSAGE=512, /* Request the target system(s) emit a single instance of a specified message (i.e. a "one-shot" version of MAV_CMD_SET_MESSAGE_INTERVAL). |The MAVLink message ID of the requested message.| Use for index ID, if required. Otherwise, the use of this parameter (if any) must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| Target address for requested message (if message has target address fields). 0: Flight-stack default, 1: address of requestor, 2: broadcast.|  */
    REQUEST_PROTOCOL_VERSION=519, /* Request MAVLink protocol version compatibility. All receivers should ACK the command and then emit their capabilities in an PROTOCOL_VERSION message |1: Request supported protocol versions by all nodes on the network| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_AUTOPILOT_CAPABILITIES=520, /* Request autopilot capabilities. The receiver should ACK the command and then emit its capabilities in an AUTOPILOT_VERSION message |1: Request autopilot version| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_CAMERA_INFORMATION=521, /* Request camera information (CAMERA_INFORMATION). |0: No action 1: Request camera capabilities| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_CAMERA_SETTINGS=522, /* Request camera settings (CAMERA_SETTINGS). |0: No Action 1: Request camera settings| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_STORAGE_INFORMATION=525, /* Request storage information (STORAGE_INFORMATION). Use the command's target_component to target a specific component's storage. |Storage ID (0 for all, 1 for first, 2 for second, etc.)| 0: No Action 1: Request storage information| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    STORAGE_FORMAT=526, /* Format a storage medium. Once format is complete, a STORAGE_INFORMATION message is sent. Use the command's target_component to target a specific component's storage. |Storage ID (1 for first, 2 for second, etc.)| Format storage (and reset image log). 0: No action 1: Format storage| Reset Image Log (without formatting storage medium). This will reset CAMERA_CAPTURE_STATUS.image_count and CAMERA_IMAGE_CAPTURED.image_index. 0: No action 1: Reset Image Log| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_CAMERA_CAPTURE_STATUS=527, /* Request camera capture status (CAMERA_CAPTURE_STATUS) |0: No Action 1: Request camera capture status| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_FLIGHT_INFORMATION=528, /* Request flight information (FLIGHT_INFORMATION) |1: Request flight information| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    RESET_CAMERA_SETTINGS=529, /* Reset all camera settings to Factory Default |0: No Action 1: Reset all settings| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    SET_CAMERA_MODE=530, /* Set camera running mode. Use NaN for reserved values. GCS will send a MAV_CMD_REQUEST_VIDEO_STREAM_STATUS command after a mode change if the camera supports video streaming. |Reserved (Set to 0)| Camera mode| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    SET_CAMERA_ZOOM=531, /* Set camera zoom. Camera must respond with a CAMERA_SETTINGS message (on success). |Zoom type| Zoom value. The range of valid values depend on the zoom type.| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    SET_CAMERA_FOCUS=532, /* Set camera focus. Camera must respond with a CAMERA_SETTINGS message (on success). |Focus type| Focus value| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    SET_STORAGE_USAGE=533, /* Set that a particular storage is the preferred location for saving photos, videos, and/or other media (e.g. to set that an SD card is used for storing videos).
          There can only be one preferred save location for each particular media type: setting a media usage flag will clear/reset that same flag if set on any other storage.
          If no flag is set the system should use its default storage.
          A target system can choose to always use default storage, in which case it should ACK the command with MAV_RESULT_UNSUPPORTED.
          A target system can choose to not allow a particular storage to be set as preferred storage, in which case it should ACK the command with MAV_RESULT_DENIED. |Storage ID (1 for first, 2 for second, etc.)| Usage flags| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    SET_AT_S_PARAM=550, /* Allows setting an AT S command of an SiK radio.
         |The radio instance, one-based, 0 for all.| The Sx index, e.g. 3 for S3 which is NETID.| The value to set it to, e.g. default 25 for NETID| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    JUMP_TAG=600, /* Tagged jump target. Can be jumped to with MAV_CMD_DO_JUMP_TAG. |Tag.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    DO_JUMP_TAG=601, /* Jump to the matching tag in the mission list. Repeat this action for the specified number of times. A mission should contain a single matching tag for each jump. If this is not the case then a jump to a missing tag should complete the mission, and a jump where there are multiple matching tags should always select the one with the lowest mission sequence number. |Target tag to jump to.| Repeat count.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    PARAM_TRANSACTION=900, /* Request to start or end a parameter transaction. Multiple kinds of transport layers can be used to exchange parameters in the transaction (param, param_ext and mavftp). The command response can either be a success/failure or an in progress in case the receiving side takes some time to apply the parameters. |Action to be performed (start, commit, cancel, etc.)| Possible transport layers to set and get parameters via mavlink during a parameter transaction.| Identifier for a specific transaction.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    DO_GIMBAL_MANAGER_PITCHYAW=1000, /* Set gimbal manager pitch/yaw setpoints (low rate command). It is possible to set combinations of the values below. E.g. an angle as well as a desired angular rate can be used to get to this angle at a certain angular rate, or an angular rate only will result in continuous turning. NaN is to be used to signal unset. Note: only the gimbal manager will react to this command - it will be ignored by a gimbal device. Use GIMBAL_MANAGER_SET_PITCHYAW if you need to stream pitch/yaw setpoints at higher rate.  |Pitch angle (positive to pitch up, relative to vehicle for FOLLOW mode, relative to world horizon for LOCK mode).| Yaw angle (positive to yaw to the right, relative to vehicle for FOLLOW mode, absolute to North for LOCK mode).| Pitch rate (positive to pitch up).| Yaw rate (positive to yaw to the right).| Gimbal manager flags to use.| Reserved (default:0)| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).|  */
    DO_GIMBAL_MANAGER_CONFIGURE=1001, /* Gimbal configuration to set which sysid/compid is in primary and secondary control. |Sysid for primary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Compid for primary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Sysid for secondary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Compid for secondary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Reserved (default:0)| Reserved (default:0)| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).|  */
    IMAGE_START_CAPTURE=2000, /* Start image capture sequence. Sends CAMERA_IMAGE_CAPTURED after each capture. Use NaN for reserved values. |Reserved (Set to 0)| Desired elapsed time between two consecutive pictures (in seconds). Minimum values depend on hardware (typically greater than 2 seconds).| Total number of images to capture. 0 to capture forever/until MAV_CMD_IMAGE_STOP_CAPTURE.| Capture sequence number starting from 1. This is only valid for single-capture (param3 == 1), otherwise set to 0. Increment the capture ID for each capture command to prevent double captures when a command is re-transmitted.| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    IMAGE_STOP_CAPTURE=2001, /* Stop image capture sequence Use NaN for reserved values. |Reserved (Set to 0)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    REQUEST_CAMERA_IMAGE_CAPTURE=2002, /* Re-request a CAMERA_IMAGE_CAPTURED message. |Sequence number for missing CAMERA_IMAGE_CAPTURED message| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    DO_TRIGGER_CONTROL=2003, /* Enable or disable on-board camera triggering system. |Trigger enable/disable (0 for disable, 1 for start), -1 to ignore| 1 to reset the trigger sequence, -1 or 0 to ignore| 1 to pause triggering, but without switching the camera off or retracting it. -1 to ignore| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    CAMERA_TRACK_POINT=2004, /* If the camera supports point visual tracking (CAMERA_CAP_FLAGS_HAS_TRACKING_POINT is set), this command allows to initiate the tracking. |Point to track x value (normalized 0..1, 0 is left, 1 is right).| Point to track y value (normalized 0..1, 0 is top, 1 is bottom).| Point radius (normalized 0..1, 0 is image left, 1 is image right).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    CAMERA_TRACK_RECTANGLE=2005, /* If the camera supports rectangle visual tracking (CAMERA_CAP_FLAGS_HAS_TRACKING_RECTANGLE is set), this command allows to initiate the tracking. |Top left corner of rectangle x value (normalized 0..1, 0 is left, 1 is right).| Top left corner of rectangle y value (normalized 0..1, 0 is top, 1 is bottom).| Bottom right corner of rectangle x value (normalized 0..1, 0 is left, 1 is right).| Bottom right corner of rectangle y value (normalized 0..1, 0 is top, 1 is bottom).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    CAMERA_STOP_TRACKING=2010, /* Stops ongoing tracking. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    VIDEO_START_CAPTURE=2500, /* Starts video capture (recording). |Video Stream ID (0 for all streams)| Frequency CAMERA_CAPTURE_STATUS messages should be sent while recording (0 for no messages, otherwise frequency)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    VIDEO_STOP_CAPTURE=2501, /* Stop the current video capture (recording). |Video Stream ID (0 for all streams)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    VIDEO_START_STREAMING=2502, /* Start video streaming |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    VIDEO_STOP_STREAMING=2503, /* Stop the given video stream |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_VIDEO_STREAM_INFORMATION=2504, /* Request video stream information (VIDEO_STREAM_INFORMATION) |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    REQUEST_VIDEO_STREAM_STATUS=2505, /* Request video stream status (VIDEO_STREAM_STATUS) |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    LOGGING_START=2510, /* Request to start streaming logging data over MAVLink (see also LOGGING_DATA message) |Format: 0: ULog| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
    LOGGING_STOP=2511, /* Request to stop streaming log data over MAVLink |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
    AIRFRAME_CONFIGURATION=2520, /*  |Landing gear ID (default: 0, -1 for all)| Landing gear position (Down: 0, Up: 1, NaN for no change)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    CONTROL_HIGH_LATENCY=2600, /* Request to start/stop transmitting over the high latency telemetry |Control transmission over high latency telemetry (0: stop, 1: start)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    PANORAMA_CREATE=2800, /* Create a panorama at the current position |Viewing angle horizontal of the panorama (+- 0.5 the total angle)| Viewing angle vertical of panorama.| Speed of the horizontal rotation.| Speed of the vertical rotation.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    DO_VTOL_TRANSITION=3000, /* Request VTOL transition |The target VTOL state. For normal transitions, only MAV_VTOL_STATE_MC and MAV_VTOL_STATE_FW can be used.| Force immediate transition to the specified MAV_VTOL_STATE. 1: Force immediate, 0: normal transition. Can be used, for example, to trigger an emergency "Quadchute". Caution: Can be dangerous/damage vehicle, depending on autopilot implementation of this command.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    ARM_AUTHORIZATION_REQUEST=3001, /* Request authorization to arm the vehicle to a external entity, the arm authorizer is responsible to request all data that is needs from the vehicle before authorize or deny the request.
		If approved the COMMAND_ACK message progress field should be set with period of time that this authorization is valid in seconds.
		If the authorization is denied COMMAND_ACK.result_param2 should be set with one of the reasons in ARM_AUTH_DENIED_REASON.
         |Vehicle system id, this way ground station can request arm authorization on behalf of any vehicle| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    SET_GUIDED_SUBMODE_STANDARD=4000, /* This command sets the submode to standard guided when vehicle is in guided mode. The vehicle holds position and altitude and the user can input the desired velocities along all three axes.
                   |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    SET_GUIDED_SUBMODE_CIRCLE=4001, /* This command sets submode circle when vehicle is in guided mode. Vehicle flies along a circle facing the center of the circle. The user can input the velocity along the circle and change the radius. If no input is given the vehicle will hold position.
                   |Radius of desired circle in CIRCLE_MODE| User defined| User defined| User defined| Target latitude of center of circle in CIRCLE_MODE| Target longitude of center of circle in CIRCLE_MODE| Reserved (default:0)|  */
    CONDITION_GATE=4501, /* Delay mission state machine until gate has been reached. |Geometry: 0: orthogonal to path between previous and next waypoint.| Altitude: 0: ignore altitude| Empty| Empty| Latitude| Longitude| Altitude|  */
    NAV_FENCE_RETURN_POINT=5000, /* Fence return point (there can only be one such point in a geofence definition). If rally points are supported they should be used instead. |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
    NAV_FENCE_POLYGON_VERTEX_INCLUSION=5001, /* Fence vertex for an inclusion polygon (the polygon must not be self-intersecting). The vehicle must stay within this area. Minimum of 3 vertices required.
         |Polygon vertex count| Vehicle must be inside ALL inclusion zones in a single group, vehicle must be inside at least one group, must be the same for all points in each polygon| Reserved| Reserved| Latitude| Longitude| Reserved|  */
    NAV_FENCE_POLYGON_VERTEX_EXCLUSION=5002, /* Fence vertex for an exclusion polygon (the polygon must not be self-intersecting). The vehicle must stay outside this area. Minimum of 3 vertices required.
         |Polygon vertex count| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
    NAV_FENCE_CIRCLE_INCLUSION=5003, /* Circular fence area. The vehicle must stay inside this area.
         |Radius.| Vehicle must be inside ALL inclusion zones in a single group, vehicle must be inside at least one group| Reserved| Reserved| Latitude| Longitude| Reserved|  */
    NAV_FENCE_CIRCLE_EXCLUSION=5004, /* Circular fence area. The vehicle must stay outside this area.
         |Radius.| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
    SET_FENCE_BREACH_ACTION=5010, /* Sets the action on geofence breach.
          If sent using the command protocol this sets the system-default geofence action.
          As part of a mission protocol plan it sets the fence action for the next complete geofence definition *after* the command.
          Note: A fence action defined in a plan will override the default system setting (even if the system-default is `FENCE_ACTION_NONE`).
          Note: Every geofence in a plan can have its own action; if no fence action is defined for a particular fence the system-default will be used.
          Note: The flight stack should reject a plan or command that uses a geofence action that it does not support and send a STATUSTEXT with the reason.
         |Fence action on breach.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    NAV_RALLY_POINT=5100, /* Rally point. You can have multiple rally points defined.
         |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
    UAVCAN_GET_NODE_INFO=5200, /* Commands the vehicle to respond with a sequence of messages UAVCAN_NODE_INFO, one message per every UAVCAN node that is online. Note that some of the response messages can be lost, which the receiver can detect easily by checking whether every received UAVCAN_NODE_STATUS has a matching message UAVCAN_NODE_INFO received earlier; if not, this command should be sent again in order to request re-transmission of the node information messages. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
    DO_ADSB_OUT_IDENT=10001, /* Trigger the start of an ADSB-out IDENT. This should only be used when requested to do so by an Air Traffic Controller in controlled airspace. This starts the IDENT which is then typically held for 18 seconds by the hardware per the Mode A, C, and S transponder spec. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
    PAYLOAD_PREPARE_DEPLOY=30001, /* Deploy payload on a Lat / Lon / Alt position. This includes the navigation to reach the required release position and velocity. |Operation mode. 0: prepare single payload deploy (overwriting previous requests), but do not execute it. 1: execute payload deploy immediately (rejecting further deploy commands during execution, but allowing abort). 2: add payload deploy to existing deployment list.| Desired approach vector in compass heading. A negative value indicates the system can define the approach vector at will.| Desired ground speed at release time. This can be overridden by the airframe in case it needs to meet minimum airspeed. A negative value indicates the system can define the ground speed at will.| Minimum altitude clearance to the release position. A negative value indicates the system can define the clearance at will.| Latitude.| Longitude.| Altitude (MSL)|  */
    PAYLOAD_CONTROL_DEPLOY=30002, /* Control the payload deployment. |Operation mode. 0: Abort deployment, continue normal mission. 1: switch to payload deployment mode. 100: delete first payload deployment request. 101: delete all payload deployment requests.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
    WAYPOINT_USER_1=31000, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    WAYPOINT_USER_2=31001, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    WAYPOINT_USER_3=31002, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    WAYPOINT_USER_4=31003, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    WAYPOINT_USER_5=31004, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    SPATIAL_USER_1=31005, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    SPATIAL_USER_2=31006, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    SPATIAL_USER_3=31007, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    SPATIAL_USER_4=31008, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    SPATIAL_USER_5=31009, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
    USER_1=31010, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
    USER_2=31011, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
    USER_3=31012, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
    USER_4=31013, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
    USER_5=31014, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
    CAN_FORWARD=32000, /* Request forwarding of CAN packets from the given CAN bus to this component. CAN Frames are sent using CAN_FRAME and CANFD_FRAME messages |Bus number (0 to disable forwarding, 1 for first bus, 2 for 2nd bus, 3 for 3rd bus).| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
    FIXED_MAG_CAL_YAW=42006, /* Magnetometer calibration based on provided known yaw. This allows for fast calibration using WMM field tables in the vehicle, given only the known yaw of the vehicle. If Latitude and longitude are both zero then use the current vehicle location. |Yaw of vehicle in earth frame.| CompassMask, 0 for all.| Latitude.| Longitude.| Empty.| Empty.| Empty.|  */
    DO_WINCH=42600, /* Command to operate winch. |Winch instance number.| Action to perform.| Length of line to release (negative to wind).| Release rate (negative to wind).| Empty.| Empty.| Empty.|  */
    GO_THROUGH_PORTAL=51000, /* 
          Go through a portal. In an indoor exploration context, a portal represents an structural identifiable entry or pass point to start, stop or continue an exploration.
          By default, the vehicle should go into Hold/Loiter mode after passing through the portal, unless configured differently on the vehicle autonomy engine (through a parameter, for example).
          COMMAND_INT should be used with its MAV_FRAME set appropriately. This will affect the coordinates used for the portal position (MAV_FRAME_GLOBAL means global coordinates are being used,
          while MAV_FRAME_LOCAL_NED means local NED coordinates are being used).
         |ID of the portal. If the ID is unknown or not deterministic, set it to UINT32_MAX and use params 5, 6 and 7 to define the local or global position of the portal.| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| X (mE4) or Latitude (degE7) coordinate (depending on MAV_FRAME) of the portal position. INT32_MAX if unknown (or if using param 1 to set the portal).| Y (mE4) or Longitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the portal position. INT32_MAX if unknown (or if using param 1 to set the portal).| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the portal position. NaN when unknown or when using param 1 to set the portal.|  */
    SET_INGRESS_PORTAL=51001, /* 
          Sets a specific portal to be an ingress portal. Defines also the approach vector for a vehicle to approach and go through the portal.
          COMMAND_INT should be used with its MAV_FRAME set appropriately. This will affect the coordinates used for the approach vector (MAV_FRAME_GLOBAL means global coordinates are being used,
          while MAV_FRAME_LOCAL_NED means local NED coordinates are being used).
         |ID of the portal to be set as an ingress point.| X (m) or Latitude (deg) (WGS84) coordinate (depending on MAV_FRAME) of the initial point of the approach vector to the portal. NaN if unknown.| Y (m) or Longitude (deg) (WGS84) coordinate (depending on MAV_FRAME) of the initial point of the approach vector to the portal. NaN if unknown.| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the initial point of the approach vector to the portal. NaN if unknown.| X (mE4) or Latitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the final point of the approach vector to the portal. INT32_MAX  if unknown.| Y (mE4) or Longitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the final point of the approach vector to the portal. INT32_MAX if unknown.| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the final point of the approach vector to the portal. NaN if unknown.|  */
    SET_EGRESS_PORTAL=51002, /* 
          Sets a specific portal to be an egress portal. Defines also the approach vector for a vehicle to approach and go through the portal.
          COMMAND_INT should be used with its MAV_FRAME set appropriately. This will affect the coordinates used for the approach vector (MAV_FRAME_GLOBAL means global coordinates are being used,
          while MAV_FRAME_LOCAL_NED means local NED coordinates are being used).
         |ID of the portal to be set as an egress point.| X (m) or Latitude (deg) (WGS84) coordinate (depending on MAV_FRAME) of the initial point of the approach vector to the portal. NaN if unknown.| Y (m) or Longitude (deg) (WGS84) coordinate (depending on MAV_FRAME) of the initial point of the approach vector to the portal. NaN if unknown.| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the initial point of the approach vector to the portal. NaN if unknown.| X (mE4) or Latitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the final point of the approach vector to the portal. INT32_MAX if unknown.| Y (mE4) or Longitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the final point of the approach vector to the portal. INT32_MAX if unknown.| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the final point of the approach vector to the portal. NaN if unknown.|  */
    DO_EXPLORATION=51010, /* 
          Start or continue the exploration task.
          If starting a new exploration that starts with a portal ingress, then params 4, 5 and 7 must be set with valid portal position information.
          Continuing an exploration can be done without necessarily setting the ingress portal, unless the exploration requires the definition of more than the initial ingress portal.
          When passing the exploration ID in the param 1 field, if the ID doesn't exist, it means a new exploration is created. If param 1 > UINT8_MAX, then the command should be rejected.
          COMMAND_INT should be used with its MAV_FRAME set appropriately. This will affect the coordinates used for the portal position (MAV_FRAME_GLOBAL means global coordinates are being used,
          while MAV_FRAME_LOCAL_NED means local NED coordinates are being used).
         |Sets the ID of the exploration task to start. If the ID already exists, it resumes that (queued/listed) exploration task. Set to UINT8_MAX if one wants to resume the last exploration task.| Time limit to execute the exploration. Reaching this time triggers the behavior defined in param 4. Set to 0 when there is no time limit.| The behavior after finishing the exploration task. 0: Hold, 1: Land, 2: Return to position.| ID of the ingress portal. If the ID is unknown, not deterministic, or when already in the area to explore after going through a portal, set it to UINT32_MAX and use params 5, 6 and 7 to define the local or global position of the portal. Note that an egress portal is not defined by this command but can be consequently set either by the vehicle autonomy engine or by an operator/external controller using MAV_CMD_SET_EGRESS_PORTAL.| X (mE4) or Latitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the portal position. INT32_MAX if unknown (or if using param 4 to set the portal).| Y (mE4) or Longitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the portal position. INT32_MAX if unknown (or if using param 4 to set the portal).| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the portal position. NaN when unknown or when using param 4 to set the portal ID.|  */
    STOP_EXPLORATION=51011, /* 
          Stop an exploration task. The behavior after stopping is defined by a parameter
          Return to position should take the vehicle to the defined exit portal first, and then to the return post-exploration point (accessible through EXPLORATION_RETURN_POSITION).
          If the passed exploration ID does not exist or is not listed as a valid exploration ID in the vehicle autonomy engine, then this command should be rejected.
         |Sets the ID of the (current or queued) exploration task to stop. Set to UINT32_MAX if one wants to stop the current exploration task.| The behavior after stopping the exploration task. 0: Hold, 1: Land, 2: Return to position.| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    SET_EXPLORATION_RETURN_POS=51012, /* 
          Sets the return position after stopping or finishing an exploration task. Used when the vehicle autonomy engine does not set this position or to overwrite it.
          COMMAND_INT should be used with its MAV_FRAME set appropriately. This will affect the coordinates used for the position (MAV_FRAME_GLOBAL means global coordinates are being used,
          while MAV_FRAME_LOCAL_NED means local NED coordinates are being used).
         |ID of the exploration to set the return position to. Set to UINT32_MAX if one wants to set it to the current exploration task.| Reserved (default:NaN)| Reserved (default:NaN)| Yaw or heading of the return position. NaN if unknown.| X (mE4) or Latitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the return position. INT32_MAX if unknown.| Y (mE4) or Longitude (degE7) (WGS84) coordinate (depending on MAV_FRAME) of the return position. INT32_MAX if unknown.| Z or Altitude (MSL) coordinate (depending on MAV_FRAME) of the return position. NaN if unknown.|  */
    DO_EXPLORATION_RETURN=51013, /* Return to a system-defined position after exploration. |Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
    SET_EXPLORATION_BOUNDARIES=51014, /* 
          Set exploration task world boundaries. When starting a new behavior, either the system has default boundaries or it is boundless.
          This message will be accepted when the task ID already exists, or otherwise should fail. In order to set the exploration task world boundaries,
          p1 and p2 identify the vertices of a rectangle, which define a 2D localization of the exploration area, while p3, matching the same coordinates of p1,
          provides the height limitation of the 3D volume to explore.
          In short, the coordinates are x1, y1, x2, y2, z and the height of the cuboid / 3D volume, where the point coordinates can be represented by
          p1(x1, y1, z+h), p2(x2, y2, z+h) and p3(x1, y1, z). COMMAND_INT should be used with its MAV_FRAME set appropriately. This will affect the coordinates
          used for the boundaries cuboid (MAV_FRAME_GLOBAL means global coordinates are being used, while MAV_FRAME_LOCAL_NED means local NED coordinates are being used).
         |ID of the exploration task to set these boundaries to. Set to UINT8_MAX if not applicable or/and to set these boundaries to the current running or active exploration task.| Exploration 3D space boundaries cuboid height. The Z local coordinate or altitude (MSL) of point 1 and 2 are computed by the sum of this height with the local Z or altitude (MSL) of point 3, i.e Z1 = Z2 = Z3 + cuboid height. NaN if not applicable.| Local X (m) or Latitude (deg) (WGS84) (depending on MAV_FRAME) of point 1 of the exploration 3D space boundaries cuboid. NaN if not applicable.| Local Y (m) or Longitude (deg) (WGS84) (depending on MAV_FRAME) of point 1 of the exploration 3D space boundaries cuboid. NaN if not applicable.| Local X (mE4) or Latitude (degE7) (WGS84) (depending on MAV_FRAME) of point 2 of the exploration 3D space boundaries cuboid. INT32_MAX if not applicable.| Local Y (mE4) or Longitude (degE7) (WGS84) (depending on MAV_FRAME) of point 2 of the exploration 3D space boundaries cuboid. INT32_MAX if not applicable.| Local Z or Altitude (MSL) (depending on MAV_FRAME) point 3 of the exploration 3D space boundaries cuboid. This also represents the height of the bottom plane of the cuboid. NaN if not applicable.|  */
    SET_POI_FOCUS=51020, /* Sets a POI at the current focus point of the camera frame. This assumes that the camera system has the ability to geo-locate the current focus point. |Operation mode. 0 = set POI at current location; 1 = set POI at current location and track it.| Position given by the number of pixels in X direction of the camera frame. Origin on the bottom left corner of the camera frame.| Position given by the number of pixels in Y direction of the camera frame. Origin on the bottom left corner of the camera frame.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
    DO_FOLLOW_POI=51021, /* Invoke platform to begin following a POI as a subject |UID of the POI to follow| Mode by which to follow the POI| The desired vertical offset in meters to attempt to maintain relative to the altitude of the subject.  Positive if following from above.  NaN if no preference.| Distance in 3D meters to attempt to maintain from target subject| Bearing in degrees from POI to attempt to maintain| Reserved (default:0)| Reserved (default:0)|  */
    COMPONENT_CONTROL=51050, /* Control the state or functionality of system components. |Component ID of the system component to be controlled.| Control command type being sent to the system component.| Identifier for the component instance. It matches an internal mapping on the system to a component/service/process ID. This is applicable when there exists a system/service manager that handles this command and interfaces with components and its instances, or when the component itself is aware of its instance number (when the target component of the command is the component to control). If there is only one instance of the component, or when one wants to control all the instances of the component, set the field to 0.| Empty.| Empty.| Empty.| Empty.|  */
};

//! MAV_CMD ENUM_END
constexpr auto MAV_CMD_ENUM_END = 51051;

/** @brief Point-of-Interest geometry types. */
enum class POI_GEOMETRY_TYPE
{
    UNKNOWN=0, /* Unknown geometry. | */
    SQUARE=1, /* Square. | */
    RECTANGLE=2, /* Rectangle. | */
    CIRCLE=3, /* Circle. | */
    CUBE=4, /* Cube. | */
    CUBOID=5, /* Cuboid. | */
    SPHERE=6, /* Sphere. | */
    CYLINDER=7, /* Cylinder. | */
};

//! POI_GEOMETRY_TYPE ENUM_END
constexpr auto POI_GEOMETRY_TYPE_ENUM_END = 8;

/** @brief 
        Point-of-Interest classification. Used on the the POI_REPORT 'classification' field. Provides default classes (0 to 2147483647).
       */
enum class POI_CLASSIFICATION : uint32_t
{
    UNKNOWN=0, /* Unknown classification. | */
    GEO_MARKER=1, /* Geolocation marker. | */
    LANDING_PAD=2, /* Landing pad. | */
    CLEAR_LANDING_SPOT=3, /* Detected suited landing spot. | */
    BUILDING=4, /* Generic building (unidentified type). | */
    RESIDENTIAL_BUILDING=5, /* Residential building. Eg. house, cottage, housebarn, tonwhouse, retirement home. | */
    COMERCIAL_OFFICE_BUILDING=6, /* Comercial office building. | */
    COMERCIAL_RETAIL_BUILDING=7, /* Comercial retail building. Eg. shopping center, retail outlet. | */
    COMERCIAL_HOTEL_BUILDING=8, /* Comercial hotel building. Eg. hotel, motel, resort. | */
    COMERCIAL_SPECIAL_PURPOSE_BUILDING=9, /* Comercial special purpose building. Eg. theater, cinema, self-storage, marina. | */
    INDUSTRIAL_MANUFACTURING_BUILDING=10, /* Industrial manufacturing building. | */
    INDUSTRIAL_WAREHOUSE_BUILDING=11, /* Industrial warehouse building. | */
    INDUSTRIAL_FLEX_SPACE_BUILDING=12, /* Industrial flex space building. Eg. data center, showroom, laboratory. | */
    AGRICULTURAL_BUILDING=13, /* Agricultural building. Eg. barn, greenhouse, silo, stable, windmill, chickenhouse. | */
    INFRASTRUCTURE_BUILDING=14, /* Infrastructure building. Eg. dam, power plant, waste transfer cetner, composting facility. | */
    INSTITUTIONAL_MEDICAL_BUILDING=15, /* Institutional medical building. Eg. hospital, nursing home. | */
    INSTITUTIONAL_EDUCATIONAL_BUILDING=16, /* Institutional educational building. Eg. college, school, orphanage. | */
    INSTITUTIONAL_CIVIC_BUILDING=17, /* Institutional civic building. Eg. library, museum, community hall. | */
    INSTITUTIONAL_RELIGIOUS_BUILDING=18, /* Institutional religious building. Eg. church, monastery, synagogue. | */
    INSTITUTIONAL_GOVERNMENT_BUILDING=19, /* Institutional government building. Eg. embassy, police station, fire station, city hall, post office. | */
    INSTITUTIONAL_MILITARY_BUILDING=20, /* Institutional military building. Eg. barracks, arsenal, bunker, citadel. | */
    INSTITUTIONAL_TRANSPORTATION_BUILDING=21, /* Institutional transportation building. Eg. airport, bus station, lighthouse, ferry terminal. | */
    BUILDING_DOOR=22, /* Building door. | */
    BUILDING_WINDOW=23, /* Building window. | */
    BUILDING_VENT=24, /* Building vent. | */
    PERSON=25, /* Person. | */
    CIVILIAN_PERSON=26, /* Civilian person. | */
    MILITARY_PERSON=27, /* Military person. | */
    INGRESS_PORTAL=28, /* Object or structure ingress portal. | */
    EGRESS_PORTAL=29, /* Object or structure egress portal. | */
    VEHICLE=30, /* Vehicle (unidentified type). | */
    GROUND_MANNED_VEHICLE=31, /* Ground manned vehicle. | */
    GROUND_UNMANNED_VEHICLE=32, /* Ground unmanned vehicle. | */
    MANNED_AIRCRAFT=33, /* Manned aircraft. | */
    UNMANNED_AIRCRAFT=34, /* Unmanned aircraft. | */
    MANNED_WATERCRAFT=35, /* Manned watercraft. | */
    UNMANNED_WATERCRAFT=36, /* Unmanned watercraft. | */
    MANNED_AMPHIBIOUS_VEHICLE=37, /* Manned amphibious vehicle. | */
    UNMANNED_AMPHIBIOUS_VEHICLE=38, /* Unmanned amphibious vehicle. | */
    RAILED_VEHICLE=39, /* Land Vehicle. | */
    ANIMAL=40, /* Animal (unidentified species). | */
};

//! POI_CLASSIFICATION ENUM_END
constexpr auto POI_CLASSIFICATION_ENUM_END = 41;

/** @brief Exploration status flags, sent as part of the EXPLORATION_STATUS message. */
enum class MAV_EXPLORATION_STATUS_FLAGS : uint16_t
{
    EXPLORATION_DISABLED=1, /* Exploration capability disabled. | */
    TASK_INACTIVE=2, /* Exploration task is inactive. | */
    TASK_STOPPED=4, /* Exploration task is stopped. | */
    TASK_START_INHIBITED=8, /* Exploration task start is inhibited, caused by a fault or unmet condition. | */
    TASK_TIME_OUT=16, /* Exploration task timed-out. | */
    TASK_OUT_OF_BOUNDS=32, /* Vehicle detected to be out of defined exploration boundaries of the exploration task. | */
    VIO_FAULT=64, /* Exploration task fault caused by a VIO problem. | */
    NAVIGATION_FAULT=128, /* Exploration task fault caused by a navigation problem. | */
};

//! MAV_EXPLORATION_STATUS_FLAGS ENUM_END
constexpr auto MAV_EXPLORATION_STATUS_FLAGS_ENUM_END = 129;

/** @brief These values define various methods of following a subject */
enum class FOLLOW_MODE
{
    MOTION_FOLLOW=0, /* Platform moves in whatever method it can to best follow a subject using subject_follow_dist and subject_follow_bearing as suggestions | */
    FIXED_FOLLOW=1, /* Platform maintains a fixed range (subject_follow_dist) and bearing (subject_follow_bearing) to the subject | */
    ORBIT=2, /* Platform continually orbits the moving subject at subject_follow_dist radius. Ignores subject_follow_bearing | */
    TRIPOD=3, /* Platform stays stationary but its sensors follow the subject.  Ignores subject_follow_dist and subject_follow_bearing | */
};

//! FOLLOW_MODE ENUM_END
constexpr auto FOLLOW_MODE_ENUM_END = 4;

/** @brief Type of controls or state changes for system components. */
enum class COMPONENT_CONTROL
{
    START=1, /* Start/turn-on system component. | */
    STOP=2, /* Stop/turn-off system component. | */
    RESTART=3, /* Restart/reboot system component. | */
    RESTART_AND_KEEP_BL=4, /* Restart/reboot system component and keep it in the bootloader until upgraded. | */
    ENABLE=5, /* Enable system component. Used to switch a system component from an idle state to an active state. | */
    DISABLE=6, /* Disable system component. Used to switch a system component from an active state to an idle state. | */
};

//! COMPONENT_CONTROL ENUM_END
constexpr auto COMPONENT_CONTROL_ENUM_END = 7;


} // namespace ras_a
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_poi_report.hpp"
#include "./mavlink_msg_exploration_status.hpp"
#include "./mavlink_msg_exploration_info.hpp"
#include "./mavlink_msg_exploration_return_position.hpp"

// base include
#include "../development/development.hpp"
