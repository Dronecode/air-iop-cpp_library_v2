// MESSAGE EXPLORATION_STATUS support class

#pragma once

namespace mavlink {
namespace ras_a {
namespace msg {

/**
 * @brief EXPLORATION_STATUS message
 *
 * Provides status over an exploration task. The message should, by default, be streamed at 1Hz.
 */
struct EXPLORATION_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 51100;
    static constexpr size_t LENGTH = 24;
    static constexpr size_t MIN_LENGTH = 24;
    static constexpr uint8_t CRC_EXTRA = 86;
    static constexpr auto NAME = "EXPLORATION_STATUS";


    uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number. */
    uint64_t time_to_timeout; /*< [us] Remaining time for the vehicle to execute the exploration task, after which another predefined behavior is triggered. UINT64_MAX when unknown or not applicable. */
    uint8_t exploration_id; /*<  ID of the exploration task. 255 if not applicable or unknown. */
    uint16_t progress; /*<  Progress measurement of the exploration task. Specific meaning may vary by implementation, but in general, increasing values mean more has been explored. UINT16_MAX when unknown or not applicable. */
    uint16_t denominator; /*<  Measurement of the known size of the exploration task. Specific meaning may vary, but when progress == denominator, this should imply that exploration is complete. This value may increase as more need to explore is discovered, or may be fixed (100 recommended) if the end state is known (e.g., exploration in a known mapped environment). 0 when no meaningful size can be communicated. */
    uint16_t flags; /*<  Bitmap of the exploration task status flags. */
    int8_t level; /*<  In an indoor exploration task, it indicates the floor/level of the structure that is currently being explored. The level where the vehicle started the exploration is considered the level 0. INT8_MAX when unknown, not capable to provide or not applicable. */


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
        ss << "  time_to_timeout: " << time_to_timeout << std::endl;
        ss << "  exploration_id: " << +exploration_id << std::endl;
        ss << "  progress: " << progress << std::endl;
        ss << "  denominator: " << denominator << std::endl;
        ss << "  flags: " << flags << std::endl;
        ss << "  level: " << +level << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << time_to_timeout;               // offset: 8
        map << progress;                      // offset: 16
        map << denominator;                   // offset: 18
        map << flags;                         // offset: 20
        map << exploration_id;                // offset: 22
        map << level;                         // offset: 23
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> time_to_timeout;               // offset: 8
        map >> progress;                      // offset: 16
        map >> denominator;                   // offset: 18
        map >> flags;                         // offset: 20
        map >> exploration_id;                // offset: 22
        map >> level;                         // offset: 23
    }
};

} // namespace msg
} // namespace ras_a
} // namespace mavlink
