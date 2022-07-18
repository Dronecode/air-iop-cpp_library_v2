// MESSAGE EXPLORATION_RETURN_POSITION support class

#pragma once

namespace mavlink {
namespace ras_a {
namespace msg {

/**
 * @brief EXPLORATION_RETURN_POSITION message
 *
 * Provides the return-from-exploration position when an exploration is completed (e.g. volume set by the exploration boundaries does not have new open areas for
        the vehicle to explore) or canceled (e.g. the operator stops the exploration task and requests the vehicle to leave the defined exploration area).
        Can either be set by the vehicle's onboard autonomy engine or set by the user MAV_CMD_SET_EXPLORATION_RETURN_POS.
        A MAV_CMD_NAV_EXPLORATION_RETURN can be used to send the vehicle to the position defined by this message.
        This message can be requested by sending the MAV_CMD_REQUEST_MESSAGE command.
      
 */
struct EXPLORATION_RETURN_POSITION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 452;
    static constexpr size_t LENGTH = 44;
    static constexpr size_t MIN_LENGTH = 44;
    static constexpr uint8_t CRC_EXTRA = 142;
    static constexpr auto NAME = "EXPLORATION_RETURN_POSITION";


    uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number. */
    int32_t latitude; /*< [degE7] Latitude (WGS84). INT32_MAX when unknown. */
    int32_t longitude; /*< [degE7] Longitude (WGS84). INT32_MAX when unknown. */
    int32_t altitude; /*< [mm] Altitude (MSL). Positive for up. Note that virtually all GPS modules provide both WGS84 and MSL. INT32_MAX when unknown. */
    int32_t relative_alt; /*< [mm] Altitude above ground. INT32_MAX when unknown. */
    int32_t geoid_alt; /*< [mm] Altitude relative to WGS84 geoid. INT32_MAX when unknown. */
    float x; /*< [m] Local X position of this position in the local coordinate NED frame. NaN when unknown. */
    float y; /*< [m] Local Y position of this position in the local coordinate NED frame. NaN when unknown. */
    float z; /*< [m] Local Z position of this position in the local coordinate NED frame. NaN when unknown. */
    float yaw; /*< [rad] World to surface heading transformation of the return-from-exploration position. Used to indicate the heading with respect to the ground. NaN when unknown. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  time_usec: " << time_usec << std::endl;
        ss << "  latitude: " << latitude << std::endl;
        ss << "  longitude: " << longitude << std::endl;
        ss << "  altitude: " << altitude << std::endl;
        ss << "  relative_alt: " << relative_alt << std::endl;
        ss << "  geoid_alt: " << geoid_alt << std::endl;
        ss << "  x: " << x << std::endl;
        ss << "  y: " << y << std::endl;
        ss << "  z: " << z << std::endl;
        ss << "  yaw: " << yaw << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << latitude;                      // offset: 8
        map << longitude;                     // offset: 12
        map << altitude;                      // offset: 16
        map << relative_alt;                  // offset: 20
        map << geoid_alt;                     // offset: 24
        map << x;                             // offset: 28
        map << y;                             // offset: 32
        map << z;                             // offset: 36
        map << yaw;                           // offset: 40
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> latitude;                      // offset: 8
        map >> longitude;                     // offset: 12
        map >> altitude;                      // offset: 16
        map >> relative_alt;                  // offset: 20
        map >> geoid_alt;                     // offset: 24
        map >> x;                             // offset: 28
        map >> y;                             // offset: 32
        map >> z;                             // offset: 36
        map >> yaw;                           // offset: 40
    }
};

} // namespace msg
} // namespace ras_a
} // namespace mavlink
