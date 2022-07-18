// MESSAGE POI_REPORT support class

#pragma once

namespace mavlink {
namespace ras_a {
namespace msg {

/**
 * @brief POI_REPORT message
 *
 * Reports information for a detected Point-of-Interest (POI).
        This can be either set by an operator (through MAV_CMD_SET_POI_FOCUS) or through onboard software or external processes.
        The receiving system should track the POI being reported based on its UID + time of detection + time of update.
        Detection time happens once for the same UID, while time of update changes when a specific metadata of that POI gets changed (e.g. position).
        The time of update should be changed on the sending system, based on the determined data in regards to that specific POI.
        So, POIs that are received again should be updated if the time of update has changed.
        Note: The sending system should repeat the current POIs at a fixed default rate of at 2Hz to keep the protocol stateless.
        The fixed rate though can be set by the receiver using MAV_CMD_SET_MESSAGE_INTERVAL, which is advised for POIs that are not static or for which
        the state updates are high - decision on the rates of some specific POIs is at the implementers consideration.
      
 */
struct POI_REPORT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 238;
    static constexpr size_t LENGTH = 219;
    static constexpr size_t MIN_LENGTH = 219;
    static constexpr uint8_t CRC_EXTRA = 72;
    static constexpr auto NAME = "POI_REPORT";


    uint64_t uid; /*<  Unique ID for a given POI. Updates to a POIs information should use the same uid. 0 means unknown. */
    uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot). */
    uint64_t time_utc_detected; /*< [ms] Timestamp (time since UNIX epoch) of the POI detection, in UTC. 0 for unknown. */
    uint64_t time_utc_updated; /*< [ms] Timestamp (time since UNIX epoch) of the last POI update, in UTC. 0 for unknown. */
    uint8_t confidence_overall; /*< [%] Generic confidence level. Can be used for an implementation specific confidence level. 0..100, UINT8_MAX when unknown. */
    uint8_t confidence_detection; /*< [%] Confidence level of the POI detection. 0..100, UINT8_MAX when unknown. */
    uint8_t confidence_classification; /*< [%] Confidence level of the POI classification. 0..100, UINT8_MAX when unknown. */
    uint8_t confidence_localization; /*< [%] Confidence level of the POI localization. 0..100, UINT8_MAX when unknown. */
    uint16_t ttl; /*< [s] Time to live: If this time has elapsed since last update, the POI should be deleted on the receiver side. A value of 0 should indicate no timeout. */
    uint8_t status_flags; /*<  Bitmask for POI status. Bit 1: POI is in focus on camera, Bit 8: POI has been cleared and should be deleted. */
    int32_t latitude; /*< [degE7] Latitude (WGS84) of the POI. If unknown: INT32_MAX (both Lat/Lon). */
    int32_t longitude; /*< [degE7] Longitude (WGS84) of the POI. If unknown: INT32_MAX (both Lat/Lon). */
    float alt_msl; /*< [m] Altitude of the POI with respect to the MSL. Positive for up. NaN if unknown. */
    float alt_ellip; /*< [m] Altitude of the POI with respect to the EGM96 ellipsoid. Positive for up. NaN if unknown. */
    float alt_ground; /*< [m] Altitude of the POI with respect to the ground level. Positive for up. NaN if unknown. */
    uint32_t classification; /*<  Classification of the POI. Can either used the POI_CLASSIFICATION enumeration (0x0 - 0x7FFFFFFF reserved), or use the reserved range for implementation specific classifications (0x80000000 - UINT32_MAX). */
    float x; /*< [m] X position of the POI in the local NED frame. The local frame might either be the vehicle navigation frame or a common reference frame to multiple systems. NAN if unknown. */
    float y; /*< [m] Y position of the POI in the local NED frame. The local frame might either be the vehicle navigation frame or a common reference frame to multiple systems. NAN if unknown. */
    float z; /*< [m] Z position of the POI in the local NED frame. The local frame might either be the vehicle navigation frame or a common reference frame to multiple systems. NAN if unknown. */
    std::array<float, 4> q; /*<  Orientation quaternion (w, x, y, z order) of the POI in the NED frame. Zero-rotation is 1, 0, 0, 0. Unknown is NAN, NAN, NAN, NAN. */
    float dist; /*< [m] Distance from the aircraft sensor/camera focal point to the POI. NAN if unknown. */
    float vel_n; /*< [m/s] North velocity of the POI. NAN if unknown. */
    float vel_e; /*< [m/s] East velocity of the POI. NAN if unknown. */
    float vel_d; /*< [m/s] Down velocity of the POI. NAN if unknown. */
    float hdg; /*< [rad] Heading of the POI in the NED frame. NAN if unknown. */
    float height; /*< [m] Height of the POI shape. When the geometry is a circle, sphere or cylinder, represents the radius. NAN if unknown. */
    float width; /*< [m] Width of the POI shape. NAN if unknown. */
    float depth; /*< [m] Depth of the POI shape. NAN if unknown. */
    uint8_t geometry; /*<  POI geometry type. */
    std::array<float, 3> approach_vector_start; /*< [m] Recommended vector start point, in the NED frame, for vehicle approach to the POI. This can either be determined by the end system where the POI was detected or by a system forwarding the information to another vehicle. Unknown is NaN, NaN, NaN. */
    std::array<float, 3> approach_vector_end; /*< [m] Recommended vector end point, in the NED frame, for vehicle approach to the POI. This can either be determined by the end system where the POI was detected or by a system forwarding the information to another vehicle. Unknown is NaN, NaN, NaN. */
    std::array<float, 3> approach_velocity; /*< [m/s] Recommended NED velocity for vehicle approach to the POI. This can either be determined by the end system where the POI was detected ir by a system forwarding the information to another vehicle. Unknown is NaN, NaN, NaN. */
    std::array<char, 32> name; /*<  Name of the POI, if the system provides one. NULL terminated string. */
    std::array<char, 31> app6_symbol; /*<  APP-6(D) standard symbol 30-digit Symbol Identification Code (SIDC) that provides the necessary information to display a tactical symbol. The SIDC is formed with eleven elements which are presented in two sets of ten digits and an additional set of ten digits composed of three elements, which are optional. Any unspecified element should be set to '0'. The way these codes are built can be checked on the Annex A to the APP-6 - NATO Joint Military Symbology, version D. NULL terminated string. */


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
        ss << "  uid: " << uid << std::endl;
        ss << "  time_boot_ms: " << time_boot_ms << std::endl;
        ss << "  time_utc_detected: " << time_utc_detected << std::endl;
        ss << "  time_utc_updated: " << time_utc_updated << std::endl;
        ss << "  confidence_overall: " << +confidence_overall << std::endl;
        ss << "  confidence_detection: " << +confidence_detection << std::endl;
        ss << "  confidence_classification: " << +confidence_classification << std::endl;
        ss << "  confidence_localization: " << +confidence_localization << std::endl;
        ss << "  ttl: " << ttl << std::endl;
        ss << "  status_flags: " << +status_flags << std::endl;
        ss << "  latitude: " << latitude << std::endl;
        ss << "  longitude: " << longitude << std::endl;
        ss << "  alt_msl: " << alt_msl << std::endl;
        ss << "  alt_ellip: " << alt_ellip << std::endl;
        ss << "  alt_ground: " << alt_ground << std::endl;
        ss << "  classification: " << classification << std::endl;
        ss << "  x: " << x << std::endl;
        ss << "  y: " << y << std::endl;
        ss << "  z: " << z << std::endl;
        ss << "  q: [" << to_string(q) << "]" << std::endl;
        ss << "  dist: " << dist << std::endl;
        ss << "  vel_n: " << vel_n << std::endl;
        ss << "  vel_e: " << vel_e << std::endl;
        ss << "  vel_d: " << vel_d << std::endl;
        ss << "  hdg: " << hdg << std::endl;
        ss << "  height: " << height << std::endl;
        ss << "  width: " << width << std::endl;
        ss << "  depth: " << depth << std::endl;
        ss << "  geometry: " << +geometry << std::endl;
        ss << "  approach_vector_start: [" << to_string(approach_vector_start) << "]" << std::endl;
        ss << "  approach_vector_end: [" << to_string(approach_vector_end) << "]" << std::endl;
        ss << "  approach_velocity: [" << to_string(approach_velocity) << "]" << std::endl;
        ss << "  name: \"" << to_string(name) << "\"" << std::endl;
        ss << "  app6_symbol: \"" << to_string(app6_symbol) << "\"" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << uid;                           // offset: 0
        map << time_utc_detected;             // offset: 8
        map << time_utc_updated;              // offset: 16
        map << time_boot_ms;                  // offset: 24
        map << latitude;                      // offset: 28
        map << longitude;                     // offset: 32
        map << alt_msl;                       // offset: 36
        map << alt_ellip;                     // offset: 40
        map << alt_ground;                    // offset: 44
        map << classification;                // offset: 48
        map << x;                             // offset: 52
        map << y;                             // offset: 56
        map << z;                             // offset: 60
        map << q;                             // offset: 64
        map << dist;                          // offset: 80
        map << vel_n;                         // offset: 84
        map << vel_e;                         // offset: 88
        map << vel_d;                         // offset: 92
        map << hdg;                           // offset: 96
        map << height;                        // offset: 100
        map << width;                         // offset: 104
        map << depth;                         // offset: 108
        map << approach_vector_start;         // offset: 112
        map << approach_vector_end;           // offset: 124
        map << approach_velocity;             // offset: 136
        map << ttl;                           // offset: 148
        map << confidence_overall;            // offset: 150
        map << confidence_detection;          // offset: 151
        map << confidence_classification;     // offset: 152
        map << confidence_localization;       // offset: 153
        map << status_flags;                  // offset: 154
        map << geometry;                      // offset: 155
        map << name;                          // offset: 156
        map << app6_symbol;                   // offset: 188
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> uid;                           // offset: 0
        map >> time_utc_detected;             // offset: 8
        map >> time_utc_updated;              // offset: 16
        map >> time_boot_ms;                  // offset: 24
        map >> latitude;                      // offset: 28
        map >> longitude;                     // offset: 32
        map >> alt_msl;                       // offset: 36
        map >> alt_ellip;                     // offset: 40
        map >> alt_ground;                    // offset: 44
        map >> classification;                // offset: 48
        map >> x;                             // offset: 52
        map >> y;                             // offset: 56
        map >> z;                             // offset: 60
        map >> q;                             // offset: 64
        map >> dist;                          // offset: 80
        map >> vel_n;                         // offset: 84
        map >> vel_e;                         // offset: 88
        map >> vel_d;                         // offset: 92
        map >> hdg;                           // offset: 96
        map >> height;                        // offset: 100
        map >> width;                         // offset: 104
        map >> depth;                         // offset: 108
        map >> approach_vector_start;         // offset: 112
        map >> approach_vector_end;           // offset: 124
        map >> approach_velocity;             // offset: 136
        map >> ttl;                           // offset: 148
        map >> confidence_overall;            // offset: 150
        map >> confidence_detection;          // offset: 151
        map >> confidence_classification;     // offset: 152
        map >> confidence_localization;       // offset: 153
        map >> status_flags;                  // offset: 154
        map >> geometry;                      // offset: 155
        map >> name;                          // offset: 156
        map >> app6_symbol;                   // offset: 188
    }
};

} // namespace msg
} // namespace ras_a
} // namespace mavlink
