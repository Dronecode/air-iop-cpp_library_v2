/** @file
 *	@brief MAVLink comm protocol generated from minimal.xml
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
namespace minimal {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 2> MESSAGE_ENTRIES {{ {0, 50, 9, 9, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 3;


// ENUM DEFINITIONS


/** @brief MAVLINK component type reported in HEARTBEAT message. Flight controllers must report the type of the vehicle on which they are mounted (e.g. MAV_TYPE_OCTOROTOR). All other components must report a value appropriate for their type (e.g. a camera must use MAV_TYPE_CAMERA). */
enum class MAV_TYPE : uint8_t
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
};

//! MAV_TYPE ENUM_END
constexpr auto MAV_TYPE_ENUM_END = 43;

/** @brief These flags encode the MAV mode. */
enum class MAV_MODE_FLAG : uint8_t
{
    CUSTOM_MODE_ENABLED=1, /* 0b00000001 Reserved for future use. | */
    TEST_ENABLED=2, /* 0b00000010 system has a test mode enabled. This flag is intended for temporary system tests and should not be used for stable implementations. | */
    AUTO_ENABLED=4, /* 0b00000100 autonomous mode enabled, system finds its own goal positions. Guided flag can be set or not, depends on the actual implementation. | */
    GUIDED_ENABLED=8, /* 0b00001000 guided mode enabled, system flies waypoints / mission items. | */
    STABILIZE_ENABLED=16, /* 0b00010000 system stabilizes electronically its attitude (and optionally position). It needs however further control inputs to move around. | */
    HIL_ENABLED=32, /* 0b00100000 hardware in the loop simulation. All motors / actuators are blocked, but internal software is full operational. | */
    MANUAL_INPUT_ENABLED=64, /* 0b01000000 remote control input is enabled. | */
    SAFETY_ARMED=128, /* 0b10000000 MAV safety set to armed. Motors are enabled / running / can start. Ready to fly. Additional note: this flag is to be ignore when sent in the command MAV_CMD_DO_SET_MODE and MAV_CMD_COMPONENT_ARM_DISARM shall be used instead. The flag can still be used to report the armed state. | */
};

//! MAV_MODE_FLAG ENUM_END
constexpr auto MAV_MODE_FLAG_ENUM_END = 129;

/** @brief These values encode the bit positions of the decode position. These values can be used to read the value of a flag bit by combining the base_mode variable with AND with the flag position value. The result will be either 0 or 1, depending on if the flag is set or not. */
enum class MAV_MODE_FLAG_DECODE_POSITION
{
    CUSTOM_MODE=1, /* Eighth bit: 00000001 | */
    TEST=2, /* Seventh bit: 00000010 | */
    AUTO=4, /* Sixth bit:   00000100 | */
    GUIDED=8, /* Fifth bit:  00001000 | */
    STABILIZE=16, /* Fourth bit: 00010000 | */
    HIL=32, /* Third bit:  00100000 | */
    MANUAL=64, /* Second bit: 01000000 | */
    SAFETY=128, /* First bit:  10000000 | */
};

//! MAV_MODE_FLAG_DECODE_POSITION ENUM_END
constexpr auto MAV_MODE_FLAG_DECODE_POSITION_ENUM_END = 129;

/** @brief  */
enum class MAV_STATE : uint8_t
{
    UNINIT=0, /* Uninitialized system, state is unknown. | */
    BOOT=1, /* System is booting up. | */
    CALIBRATING=2, /* System is calibrating and not flight-ready. | */
    STANDBY=3, /* System is grounded and on standby. It can be launched any time. | */
    ACTIVE=4, /* System is active and might be already airborne. Motors are engaged. | */
    CRITICAL=5, /* System is in a non-normal flight mode. It can however still navigate. | */
    EMERGENCY=6, /* System is in a non-normal flight mode. It lost control over parts or over the whole airframe. It is in mayday and going down. | */
    POWEROFF=7, /* System just initialized its power-down sequence, will shut down now. | */
    FLIGHT_TERMINATION=8, /* System is terminating itself. | */
};

//! MAV_STATE ENUM_END
constexpr auto MAV_STATE_ENUM_END = 9;


} // namespace minimal
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_heartbeat.hpp"
#include "./mavlink_msg_protocol_version.hpp"

// base include

