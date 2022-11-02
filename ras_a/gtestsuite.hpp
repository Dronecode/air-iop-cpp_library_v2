/** @file
 *	@brief MAVLink comm testsuite protocol generated from ras_a.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "ras_a.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(ras_a, POI_REPORT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ras_a::msg::POI_REPORT packet_in{};
    packet_in.uid = 963498296;
    packet_in.time_boot_ms = 963498504;
    packet_in.time_utc_detected = 93372036854775807ULL;
    packet_in.time_utc_updated = 93372036854776311ULL;
    packet_in.confidence_overall = 59;
    packet_in.confidence_detection = 126;
    packet_in.confidence_classification = 193;
    packet_in.confidence_localization = 4;
    packet_in.ttl = 24723;
    packet_in.status_flags = 71;
    packet_in.latitude = 963498712;
    packet_in.longitude = 963498920;
    packet_in.alt_msl = 241.0;
    packet_in.alt_ellip = 269.0;
    packet_in.alt_ground = 297.0;
    packet_in.classification = 963499752;
    packet_in.x = 353.0;
    packet_in.y = 381.0;
    packet_in.z = 409.0;
    packet_in.q = {{ 437.0, 438.0, 439.0, 440.0 }};
    packet_in.dist = 549.0;
    packet_in.vel_n = 577.0;
    packet_in.vel_e = 605.0;
    packet_in.vel_d = 633.0;
    packet_in.hdg = 661.0;
    packet_in.height = 689.0;
    packet_in.width = 717.0;
    packet_in.depth = 745.0;
    packet_in.geometry = 138;
    packet_in.approach_vector_start = {{ 773.0, 774.0, 775.0 }};
    packet_in.approach_vector_end = {{ 857.0, 858.0, 859.0 }};
    packet_in.approach_velocity = {{ 941.0, 942.0, 943.0 }};
    packet_in.name = to_char_array("WXYZABCDEFGHIJKLMNOPQRSTUVWXYZA");
    packet_in.app6_symbol = to_char_array("CDEFGHIJKLMNOPQRSTUVWXYZABCDEF");

    mavlink::ras_a::msg::POI_REPORT packet1{};
    mavlink::ras_a::msg::POI_REPORT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.uid, packet2.uid);
    EXPECT_EQ(packet1.time_boot_ms, packet2.time_boot_ms);
    EXPECT_EQ(packet1.time_utc_detected, packet2.time_utc_detected);
    EXPECT_EQ(packet1.time_utc_updated, packet2.time_utc_updated);
    EXPECT_EQ(packet1.confidence_overall, packet2.confidence_overall);
    EXPECT_EQ(packet1.confidence_detection, packet2.confidence_detection);
    EXPECT_EQ(packet1.confidence_classification, packet2.confidence_classification);
    EXPECT_EQ(packet1.confidence_localization, packet2.confidence_localization);
    EXPECT_EQ(packet1.ttl, packet2.ttl);
    EXPECT_EQ(packet1.status_flags, packet2.status_flags);
    EXPECT_EQ(packet1.latitude, packet2.latitude);
    EXPECT_EQ(packet1.longitude, packet2.longitude);
    EXPECT_EQ(packet1.alt_msl, packet2.alt_msl);
    EXPECT_EQ(packet1.alt_ellip, packet2.alt_ellip);
    EXPECT_EQ(packet1.alt_ground, packet2.alt_ground);
    EXPECT_EQ(packet1.classification, packet2.classification);
    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.y, packet2.y);
    EXPECT_EQ(packet1.z, packet2.z);
    EXPECT_EQ(packet1.q, packet2.q);
    EXPECT_EQ(packet1.dist, packet2.dist);
    EXPECT_EQ(packet1.vel_n, packet2.vel_n);
    EXPECT_EQ(packet1.vel_e, packet2.vel_e);
    EXPECT_EQ(packet1.vel_d, packet2.vel_d);
    EXPECT_EQ(packet1.hdg, packet2.hdg);
    EXPECT_EQ(packet1.height, packet2.height);
    EXPECT_EQ(packet1.width, packet2.width);
    EXPECT_EQ(packet1.depth, packet2.depth);
    EXPECT_EQ(packet1.geometry, packet2.geometry);
    EXPECT_EQ(packet1.approach_vector_start, packet2.approach_vector_start);
    EXPECT_EQ(packet1.approach_vector_end, packet2.approach_vector_end);
    EXPECT_EQ(packet1.approach_velocity, packet2.approach_velocity);
    EXPECT_EQ(packet1.name, packet2.name);
    EXPECT_EQ(packet1.app6_symbol, packet2.app6_symbol);
}

#ifdef TEST_INTEROP
TEST(ras_a_interop, POI_REPORT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_poi_report_t packet_c {
         93372036854775807ULL, 93372036854776311ULL, 963498296, 963498504, 963498712, 963498920, 241.0, 269.0, 297.0, 963499752, 353.0, 381.0, 409.0, { 437.0, 438.0, 439.0, 440.0 }, 549.0, 577.0, 605.0, 633.0, 661.0, 689.0, 717.0, 745.0, { 773.0, 774.0, 775.0 }, { 857.0, 858.0, 859.0 }, { 941.0, 942.0, 943.0 }, 24723, 59, 126, 193, 4, 71, 138, "WXYZABCDEFGHIJKLMNOPQRSTUVWXYZA", "CDEFGHIJKLMNOPQRSTUVWXYZABCDEF"
    };

    mavlink::ras_a::msg::POI_REPORT packet_in{};
    packet_in.uid = 963498296;
    packet_in.time_boot_ms = 963498504;
    packet_in.time_utc_detected = 93372036854775807ULL;
    packet_in.time_utc_updated = 93372036854776311ULL;
    packet_in.confidence_overall = 59;
    packet_in.confidence_detection = 126;
    packet_in.confidence_classification = 193;
    packet_in.confidence_localization = 4;
    packet_in.ttl = 24723;
    packet_in.status_flags = 71;
    packet_in.latitude = 963498712;
    packet_in.longitude = 963498920;
    packet_in.alt_msl = 241.0;
    packet_in.alt_ellip = 269.0;
    packet_in.alt_ground = 297.0;
    packet_in.classification = 963499752;
    packet_in.x = 353.0;
    packet_in.y = 381.0;
    packet_in.z = 409.0;
    packet_in.q = {{ 437.0, 438.0, 439.0, 440.0 }};
    packet_in.dist = 549.0;
    packet_in.vel_n = 577.0;
    packet_in.vel_e = 605.0;
    packet_in.vel_d = 633.0;
    packet_in.hdg = 661.0;
    packet_in.height = 689.0;
    packet_in.width = 717.0;
    packet_in.depth = 745.0;
    packet_in.geometry = 138;
    packet_in.approach_vector_start = {{ 773.0, 774.0, 775.0 }};
    packet_in.approach_vector_end = {{ 857.0, 858.0, 859.0 }};
    packet_in.approach_velocity = {{ 941.0, 942.0, 943.0 }};
    packet_in.name = to_char_array("WXYZABCDEFGHIJKLMNOPQRSTUVWXYZA");
    packet_in.app6_symbol = to_char_array("CDEFGHIJKLMNOPQRSTUVWXYZABCDEF");

    mavlink::ras_a::msg::POI_REPORT packet2{};

    mavlink_msg_poi_report_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.uid, packet2.uid);
    EXPECT_EQ(packet_in.time_boot_ms, packet2.time_boot_ms);
    EXPECT_EQ(packet_in.time_utc_detected, packet2.time_utc_detected);
    EXPECT_EQ(packet_in.time_utc_updated, packet2.time_utc_updated);
    EXPECT_EQ(packet_in.confidence_overall, packet2.confidence_overall);
    EXPECT_EQ(packet_in.confidence_detection, packet2.confidence_detection);
    EXPECT_EQ(packet_in.confidence_classification, packet2.confidence_classification);
    EXPECT_EQ(packet_in.confidence_localization, packet2.confidence_localization);
    EXPECT_EQ(packet_in.ttl, packet2.ttl);
    EXPECT_EQ(packet_in.status_flags, packet2.status_flags);
    EXPECT_EQ(packet_in.latitude, packet2.latitude);
    EXPECT_EQ(packet_in.longitude, packet2.longitude);
    EXPECT_EQ(packet_in.alt_msl, packet2.alt_msl);
    EXPECT_EQ(packet_in.alt_ellip, packet2.alt_ellip);
    EXPECT_EQ(packet_in.alt_ground, packet2.alt_ground);
    EXPECT_EQ(packet_in.classification, packet2.classification);
    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.y, packet2.y);
    EXPECT_EQ(packet_in.z, packet2.z);
    EXPECT_EQ(packet_in.q, packet2.q);
    EXPECT_EQ(packet_in.dist, packet2.dist);
    EXPECT_EQ(packet_in.vel_n, packet2.vel_n);
    EXPECT_EQ(packet_in.vel_e, packet2.vel_e);
    EXPECT_EQ(packet_in.vel_d, packet2.vel_d);
    EXPECT_EQ(packet_in.hdg, packet2.hdg);
    EXPECT_EQ(packet_in.height, packet2.height);
    EXPECT_EQ(packet_in.width, packet2.width);
    EXPECT_EQ(packet_in.depth, packet2.depth);
    EXPECT_EQ(packet_in.geometry, packet2.geometry);
    EXPECT_EQ(packet_in.approach_vector_start, packet2.approach_vector_start);
    EXPECT_EQ(packet_in.approach_vector_end, packet2.approach_vector_end);
    EXPECT_EQ(packet_in.approach_velocity, packet2.approach_velocity);
    EXPECT_EQ(packet_in.name, packet2.name);
    EXPECT_EQ(packet_in.app6_symbol, packet2.app6_symbol);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ras_a, EXPLORATION_STATUS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ras_a::msg::EXPLORATION_STATUS packet_in{};
    packet_in.time_usec = 93372036854775807ULL;
    packet_in.time_to_timeout = 93372036854776311ULL;
    packet_in.exploration_id = 199;
    packet_in.progress = 18067;
    packet_in.denominator = 18171;
    packet_in.flags = 18275;
    packet_in.level = 10;

    mavlink::ras_a::msg::EXPLORATION_STATUS packet1{};
    mavlink::ras_a::msg::EXPLORATION_STATUS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.time_usec, packet2.time_usec);
    EXPECT_EQ(packet1.time_to_timeout, packet2.time_to_timeout);
    EXPECT_EQ(packet1.exploration_id, packet2.exploration_id);
    EXPECT_EQ(packet1.progress, packet2.progress);
    EXPECT_EQ(packet1.denominator, packet2.denominator);
    EXPECT_EQ(packet1.flags, packet2.flags);
    EXPECT_EQ(packet1.level, packet2.level);
}

#ifdef TEST_INTEROP
TEST(ras_a_interop, EXPLORATION_STATUS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_exploration_status_t packet_c {
         93372036854775807ULL, 93372036854776311ULL, 18067, 18171, 18275, 199, 10
    };

    mavlink::ras_a::msg::EXPLORATION_STATUS packet_in{};
    packet_in.time_usec = 93372036854775807ULL;
    packet_in.time_to_timeout = 93372036854776311ULL;
    packet_in.exploration_id = 199;
    packet_in.progress = 18067;
    packet_in.denominator = 18171;
    packet_in.flags = 18275;
    packet_in.level = 10;

    mavlink::ras_a::msg::EXPLORATION_STATUS packet2{};

    mavlink_msg_exploration_status_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.time_usec, packet2.time_usec);
    EXPECT_EQ(packet_in.time_to_timeout, packet2.time_to_timeout);
    EXPECT_EQ(packet_in.exploration_id, packet2.exploration_id);
    EXPECT_EQ(packet_in.progress, packet2.progress);
    EXPECT_EQ(packet_in.denominator, packet2.denominator);
    EXPECT_EQ(packet_in.flags, packet2.flags);
    EXPECT_EQ(packet_in.level, packet2.level);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ras_a, EXPLORATION_INFO)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ras_a::msg::EXPLORATION_INFO packet_in{};
    packet_in.exploration_id = 1;
    packet_in.time_limit = 963497464;
    packet_in.behaviour_after_stopping = 68;
    packet_in.boundaries_p1_lat = 963497672;
    packet_in.boundaries_p1_lon = 963497880;
    packet_in.boundaries_p1_alt = 101.0;
    packet_in.boundaries_p1_x = 129.0;
    packet_in.boundaries_p1_y = 157.0;
    packet_in.boundaries_p1_z = 185.0;
    packet_in.boundaries_p2_lat = 963498920;
    packet_in.boundaries_p2_lon = 963499128;
    packet_in.boundaries_p2_x = 269.0;
    packet_in.boundaries_p2_y = 297.0;
    packet_in.boundaries_p3_alt = 325.0;
    packet_in.boundaries_p3_z = 353.0;
    packet_in.ingress_portal_id = 963500168;
    packet_in.ingress_portal_lat = 963500376;
    packet_in.ingress_portal_lon = 963500584;
    packet_in.ingress_portal_alt = 465.0;
    packet_in.egress_portal_id = 963501000;
    packet_in.egress_portal_lat = 963501208;
    packet_in.egress_portal_lon = 963501416;
    packet_in.egress_portal_alt = 577.0;

    mavlink::ras_a::msg::EXPLORATION_INFO packet1{};
    mavlink::ras_a::msg::EXPLORATION_INFO packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.exploration_id, packet2.exploration_id);
    EXPECT_EQ(packet1.time_limit, packet2.time_limit);
    EXPECT_EQ(packet1.behaviour_after_stopping, packet2.behaviour_after_stopping);
    EXPECT_EQ(packet1.boundaries_p1_lat, packet2.boundaries_p1_lat);
    EXPECT_EQ(packet1.boundaries_p1_lon, packet2.boundaries_p1_lon);
    EXPECT_EQ(packet1.boundaries_p1_alt, packet2.boundaries_p1_alt);
    EXPECT_EQ(packet1.boundaries_p1_x, packet2.boundaries_p1_x);
    EXPECT_EQ(packet1.boundaries_p1_y, packet2.boundaries_p1_y);
    EXPECT_EQ(packet1.boundaries_p1_z, packet2.boundaries_p1_z);
    EXPECT_EQ(packet1.boundaries_p2_lat, packet2.boundaries_p2_lat);
    EXPECT_EQ(packet1.boundaries_p2_lon, packet2.boundaries_p2_lon);
    EXPECT_EQ(packet1.boundaries_p2_x, packet2.boundaries_p2_x);
    EXPECT_EQ(packet1.boundaries_p2_y, packet2.boundaries_p2_y);
    EXPECT_EQ(packet1.boundaries_p3_alt, packet2.boundaries_p3_alt);
    EXPECT_EQ(packet1.boundaries_p3_z, packet2.boundaries_p3_z);
    EXPECT_EQ(packet1.ingress_portal_id, packet2.ingress_portal_id);
    EXPECT_EQ(packet1.ingress_portal_lat, packet2.ingress_portal_lat);
    EXPECT_EQ(packet1.ingress_portal_lon, packet2.ingress_portal_lon);
    EXPECT_EQ(packet1.ingress_portal_alt, packet2.ingress_portal_alt);
    EXPECT_EQ(packet1.egress_portal_id, packet2.egress_portal_id);
    EXPECT_EQ(packet1.egress_portal_lat, packet2.egress_portal_lat);
    EXPECT_EQ(packet1.egress_portal_lon, packet2.egress_portal_lon);
    EXPECT_EQ(packet1.egress_portal_alt, packet2.egress_portal_alt);
}

#ifdef TEST_INTEROP
TEST(ras_a_interop, EXPLORATION_INFO)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_exploration_info_t packet_c {
         963497464, 963497672, 963497880, 101.0, 129.0, 157.0, 185.0, 963498920, 963499128, 269.0, 297.0, 325.0, 353.0, 963500168, 963500376, 963500584, 465.0, 963501000, 963501208, 963501416, 577.0, 1, 68
    };

    mavlink::ras_a::msg::EXPLORATION_INFO packet_in{};
    packet_in.exploration_id = 1;
    packet_in.time_limit = 963497464;
    packet_in.behaviour_after_stopping = 68;
    packet_in.boundaries_p1_lat = 963497672;
    packet_in.boundaries_p1_lon = 963497880;
    packet_in.boundaries_p1_alt = 101.0;
    packet_in.boundaries_p1_x = 129.0;
    packet_in.boundaries_p1_y = 157.0;
    packet_in.boundaries_p1_z = 185.0;
    packet_in.boundaries_p2_lat = 963498920;
    packet_in.boundaries_p2_lon = 963499128;
    packet_in.boundaries_p2_x = 269.0;
    packet_in.boundaries_p2_y = 297.0;
    packet_in.boundaries_p3_alt = 325.0;
    packet_in.boundaries_p3_z = 353.0;
    packet_in.ingress_portal_id = 963500168;
    packet_in.ingress_portal_lat = 963500376;
    packet_in.ingress_portal_lon = 963500584;
    packet_in.ingress_portal_alt = 465.0;
    packet_in.egress_portal_id = 963501000;
    packet_in.egress_portal_lat = 963501208;
    packet_in.egress_portal_lon = 963501416;
    packet_in.egress_portal_alt = 577.0;

    mavlink::ras_a::msg::EXPLORATION_INFO packet2{};

    mavlink_msg_exploration_info_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.exploration_id, packet2.exploration_id);
    EXPECT_EQ(packet_in.time_limit, packet2.time_limit);
    EXPECT_EQ(packet_in.behaviour_after_stopping, packet2.behaviour_after_stopping);
    EXPECT_EQ(packet_in.boundaries_p1_lat, packet2.boundaries_p1_lat);
    EXPECT_EQ(packet_in.boundaries_p1_lon, packet2.boundaries_p1_lon);
    EXPECT_EQ(packet_in.boundaries_p1_alt, packet2.boundaries_p1_alt);
    EXPECT_EQ(packet_in.boundaries_p1_x, packet2.boundaries_p1_x);
    EXPECT_EQ(packet_in.boundaries_p1_y, packet2.boundaries_p1_y);
    EXPECT_EQ(packet_in.boundaries_p1_z, packet2.boundaries_p1_z);
    EXPECT_EQ(packet_in.boundaries_p2_lat, packet2.boundaries_p2_lat);
    EXPECT_EQ(packet_in.boundaries_p2_lon, packet2.boundaries_p2_lon);
    EXPECT_EQ(packet_in.boundaries_p2_x, packet2.boundaries_p2_x);
    EXPECT_EQ(packet_in.boundaries_p2_y, packet2.boundaries_p2_y);
    EXPECT_EQ(packet_in.boundaries_p3_alt, packet2.boundaries_p3_alt);
    EXPECT_EQ(packet_in.boundaries_p3_z, packet2.boundaries_p3_z);
    EXPECT_EQ(packet_in.ingress_portal_id, packet2.ingress_portal_id);
    EXPECT_EQ(packet_in.ingress_portal_lat, packet2.ingress_portal_lat);
    EXPECT_EQ(packet_in.ingress_portal_lon, packet2.ingress_portal_lon);
    EXPECT_EQ(packet_in.ingress_portal_alt, packet2.ingress_portal_alt);
    EXPECT_EQ(packet_in.egress_portal_id, packet2.egress_portal_id);
    EXPECT_EQ(packet_in.egress_portal_lat, packet2.egress_portal_lat);
    EXPECT_EQ(packet_in.egress_portal_lon, packet2.egress_portal_lon);
    EXPECT_EQ(packet_in.egress_portal_alt, packet2.egress_portal_alt);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ras_a, EXPLORATION_RETURN_POSITION)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ras_a::msg::EXPLORATION_RETURN_POSITION packet_in{};
    packet_in.time_usec = 93372036854775807ULL;
    packet_in.latitude = 963497880;
    packet_in.longitude = 963498088;
    packet_in.altitude = 963498296;
    packet_in.relative_alt = 963498504;
    packet_in.geoid_alt = 963498712;
    packet_in.x = 213.0;
    packet_in.y = 241.0;
    packet_in.z = 269.0;
    packet_in.yaw = 297.0;

    mavlink::ras_a::msg::EXPLORATION_RETURN_POSITION packet1{};
    mavlink::ras_a::msg::EXPLORATION_RETURN_POSITION packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.time_usec, packet2.time_usec);
    EXPECT_EQ(packet1.latitude, packet2.latitude);
    EXPECT_EQ(packet1.longitude, packet2.longitude);
    EXPECT_EQ(packet1.altitude, packet2.altitude);
    EXPECT_EQ(packet1.relative_alt, packet2.relative_alt);
    EXPECT_EQ(packet1.geoid_alt, packet2.geoid_alt);
    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.y, packet2.y);
    EXPECT_EQ(packet1.z, packet2.z);
    EXPECT_EQ(packet1.yaw, packet2.yaw);
}

#ifdef TEST_INTEROP
TEST(ras_a_interop, EXPLORATION_RETURN_POSITION)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_exploration_return_position_t packet_c {
         93372036854775807ULL, 963497880, 963498088, 963498296, 963498504, 963498712, 213.0, 241.0, 269.0, 297.0
    };

    mavlink::ras_a::msg::EXPLORATION_RETURN_POSITION packet_in{};
    packet_in.time_usec = 93372036854775807ULL;
    packet_in.latitude = 963497880;
    packet_in.longitude = 963498088;
    packet_in.altitude = 963498296;
    packet_in.relative_alt = 963498504;
    packet_in.geoid_alt = 963498712;
    packet_in.x = 213.0;
    packet_in.y = 241.0;
    packet_in.z = 269.0;
    packet_in.yaw = 297.0;

    mavlink::ras_a::msg::EXPLORATION_RETURN_POSITION packet2{};

    mavlink_msg_exploration_return_position_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.time_usec, packet2.time_usec);
    EXPECT_EQ(packet_in.latitude, packet2.latitude);
    EXPECT_EQ(packet_in.longitude, packet2.longitude);
    EXPECT_EQ(packet_in.altitude, packet2.altitude);
    EXPECT_EQ(packet_in.relative_alt, packet2.relative_alt);
    EXPECT_EQ(packet_in.geoid_alt, packet2.geoid_alt);
    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.y, packet2.y);
    EXPECT_EQ(packet_in.z, packet2.z);
    EXPECT_EQ(packet_in.yaw, packet2.yaw);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
