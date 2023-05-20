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

