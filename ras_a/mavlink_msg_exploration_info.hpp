// MESSAGE EXPLORATION_INFO support class

#pragma once

namespace mavlink {
namespace ras_a {
namespace msg {

/**
 * @brief EXPLORATION_INFO message
 *
 * Provides configuration information about an exploration task.
        The message can be requested using the MAV_CMD_REQUEST_MESSAGE command, where param 3 should be used to set which exploration task to get.
        To determine all coordinates of the cuboid, consider: p1_x equals p3_x, p1_y equals p3_y, p1_z equals p2_z, p1_lat equals p3_lat, p1_lon equals p3_lon and p1_alt equals p2_alt.
      
 */
struct EXPLORATION_INFO : mavlink::Message {
    static constexpr msgid_t MSG_ID = 451;
    static constexpr size_t LENGTH = 86;
    static constexpr size_t MIN_LENGTH = 86;
    static constexpr uint8_t CRC_EXTRA = 147;
    static constexpr auto NAME = "EXPLORATION_INFO";


    uint8_t exploration_id; /*<  ID of the exploration task. 255 to get the information of the current running exploration task. */
    uint32_t time_limit; /*< [s] Time limit to execute the exploration. Reaching this time triggers the behavior defined in the behaviour_after_stopping field. Set to 0 when the exploration time is not limited. */
    uint8_t behaviour_after_stopping; /*<  The behavior after stopping the exploration task. 0: Hold, 1: Land, 2: Return (to exploration return position). */
    int32_t boundaries_p1_lat; /*< [degE7] Exploration cuboid boundaries point 1 Latitude (WGS84). INT32_MAX if unknown. p1_lat == p3_lat. */
    int32_t boundaries_p1_lon; /*< [degE7] Exploration cuboid boundaries point 1 Longitude (WGS84). INT32_MAX if unknown. p1_lat == p3_lat. */
    float boundaries_p1_alt; /*< [m] Exploration cuboid boundaries point 1 Altitude (MSL). NaN if unknown. p1_alt == p2_alt. */
    float boundaries_p1_x; /*< [m] Exploration cuboid boundaries point 1 local NED X coordinate. NaN if unknown. p1_x == p3_x. */
    float boundaries_p1_y; /*< [m] Exploration cuboid boundaries point 1 local NED Y coordinate. NaN if unknown. p1_y == p3_y. */
    float boundaries_p1_z; /*< [m] Exploration cuboid boundaries point 1 local NED Z coordinate. NaN if unknown. p1_z == p2_z. */
    int32_t boundaries_p2_lat; /*< [degE7] Exploration cuboid boundaries point 2 Latitude (WGS84). INT32_MAX if unknown. */
    int32_t boundaries_p2_lon; /*< [degE7] Exploration cuboid boundaries point 2 Longitude (WGS84). INT32_MAX if unknown. */
    float boundaries_p2_x; /*< [m] Exploration cuboid boundaries point 2 local NED X coordinate. NaN if unknown. */
    float boundaries_p2_y; /*< [m] Exploration cuboid boundaries point 2 local NED Y coordinate. NaN if unknown. */
    float boundaries_p3_alt; /*< [m] Exploration cuboid boundaries point 3 Altitude (MSL). NaN if unknown. */
    float boundaries_p3_z; /*< [m] Exploration cuboid boundaries point 3 local NED Z coordinate. NaN if unknown. */
    uint32_t ingress_portal_id; /*<  Currently defined ingress portal ID. This portal ID can either be set by the system autonomy engine or by an offboard controller or operator using MAV_CMD_SET_INGRESS_PORTAL. When unknown, not applicable or not deterministic, set to UINT32_MAX. */
    int32_t ingress_portal_lat; /*< [degE7] Currently defined ingress portal Latitude (WGS84). INT32_MAX if unknown, not applicable or when ingress_portal_id is set and different from UINT32_MAX. */
    int32_t ingress_portal_lon; /*< [degE7] Currently defined ingress portal Longitude (WGS84). INT32_MAX if unknown, not applicable or when ingress_portal_id is set and different from UINT32_MAX. */
    float ingress_portal_alt; /*< [m] Currently defined ingress portal Altitude (MSL). NaN if unknown, not applicable or when ingress_portal_id is set and different from UINT32_MAX. */
    uint32_t egress_portal_id; /*<  Currently defined egress portal ID. This portal ID can either be set by the system autonomy engine or by an offboard controller or operator using MAV_CMD_SET_EGRESS_PORTAL. When unknown, not applicable or not deterministic, set to UINT32_MAX. */
    int32_t egress_portal_lat; /*< [degE7] Currently defined egress portal Latitude (WGS84). INT32_MAX if unknown, not applicable or when egress_portal_id is set and different from UINT32_MAX. */
    int32_t egress_portal_lon; /*< [degE7] Currently defined egress portal Longitude (WGS84). INT32_MAX if unknown, not applicable or when egress_portal_id is set and different from UINT32_MAX. */
    float egress_portal_alt; /*< [m] Currently defined egress portal Altitude (MSL). NaN if unknown, not applicable or when egress_portal_id is set and different from UINT32_MAX. */


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
        ss << "  exploration_id: " << +exploration_id << std::endl;
        ss << "  time_limit: " << time_limit << std::endl;
        ss << "  behaviour_after_stopping: " << +behaviour_after_stopping << std::endl;
        ss << "  boundaries_p1_lat: " << boundaries_p1_lat << std::endl;
        ss << "  boundaries_p1_lon: " << boundaries_p1_lon << std::endl;
        ss << "  boundaries_p1_alt: " << boundaries_p1_alt << std::endl;
        ss << "  boundaries_p1_x: " << boundaries_p1_x << std::endl;
        ss << "  boundaries_p1_y: " << boundaries_p1_y << std::endl;
        ss << "  boundaries_p1_z: " << boundaries_p1_z << std::endl;
        ss << "  boundaries_p2_lat: " << boundaries_p2_lat << std::endl;
        ss << "  boundaries_p2_lon: " << boundaries_p2_lon << std::endl;
        ss << "  boundaries_p2_x: " << boundaries_p2_x << std::endl;
        ss << "  boundaries_p2_y: " << boundaries_p2_y << std::endl;
        ss << "  boundaries_p3_alt: " << boundaries_p3_alt << std::endl;
        ss << "  boundaries_p3_z: " << boundaries_p3_z << std::endl;
        ss << "  ingress_portal_id: " << ingress_portal_id << std::endl;
        ss << "  ingress_portal_lat: " << ingress_portal_lat << std::endl;
        ss << "  ingress_portal_lon: " << ingress_portal_lon << std::endl;
        ss << "  ingress_portal_alt: " << ingress_portal_alt << std::endl;
        ss << "  egress_portal_id: " << egress_portal_id << std::endl;
        ss << "  egress_portal_lat: " << egress_portal_lat << std::endl;
        ss << "  egress_portal_lon: " << egress_portal_lon << std::endl;
        ss << "  egress_portal_alt: " << egress_portal_alt << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_limit;                    // offset: 0
        map << boundaries_p1_lat;             // offset: 4
        map << boundaries_p1_lon;             // offset: 8
        map << boundaries_p1_alt;             // offset: 12
        map << boundaries_p1_x;               // offset: 16
        map << boundaries_p1_y;               // offset: 20
        map << boundaries_p1_z;               // offset: 24
        map << boundaries_p2_lat;             // offset: 28
        map << boundaries_p2_lon;             // offset: 32
        map << boundaries_p2_x;               // offset: 36
        map << boundaries_p2_y;               // offset: 40
        map << boundaries_p3_alt;             // offset: 44
        map << boundaries_p3_z;               // offset: 48
        map << ingress_portal_id;             // offset: 52
        map << ingress_portal_lat;            // offset: 56
        map << ingress_portal_lon;            // offset: 60
        map << ingress_portal_alt;            // offset: 64
        map << egress_portal_id;              // offset: 68
        map << egress_portal_lat;             // offset: 72
        map << egress_portal_lon;             // offset: 76
        map << egress_portal_alt;             // offset: 80
        map << exploration_id;                // offset: 84
        map << behaviour_after_stopping;      // offset: 85
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_limit;                    // offset: 0
        map >> boundaries_p1_lat;             // offset: 4
        map >> boundaries_p1_lon;             // offset: 8
        map >> boundaries_p1_alt;             // offset: 12
        map >> boundaries_p1_x;               // offset: 16
        map >> boundaries_p1_y;               // offset: 20
        map >> boundaries_p1_z;               // offset: 24
        map >> boundaries_p2_lat;             // offset: 28
        map >> boundaries_p2_lon;             // offset: 32
        map >> boundaries_p2_x;               // offset: 36
        map >> boundaries_p2_y;               // offset: 40
        map >> boundaries_p3_alt;             // offset: 44
        map >> boundaries_p3_z;               // offset: 48
        map >> ingress_portal_id;             // offset: 52
        map >> ingress_portal_lat;            // offset: 56
        map >> ingress_portal_lon;            // offset: 60
        map >> ingress_portal_alt;            // offset: 64
        map >> egress_portal_id;              // offset: 68
        map >> egress_portal_lat;             // offset: 72
        map >> egress_portal_lon;             // offset: 76
        map >> egress_portal_alt;             // offset: 80
        map >> exploration_id;                // offset: 84
        map >> behaviour_after_stopping;      // offset: 85
    }
};

} // namespace msg
} // namespace ras_a
} // namespace mavlink
