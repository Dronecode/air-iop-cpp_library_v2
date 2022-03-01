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
    packet_in.uid = 93372036854775807ULL;
    packet_in.time_boot_ms = 963498712;
    packet_in.time_utc_detected = 93372036854776311ULL;
    packet_in.time_utc_updated = 93372036854776815ULL;
    packet_in.confidence_overall = 71;
    packet_in.confidence_detection = 138;
    packet_in.confidence_classification = 205;
    packet_in.confidence_localization = 16;
    packet_in.ttl = 24931;
    packet_in.status_flags = 83;
    packet_in.latitude = 963498920;
    packet_in.longitude = 963499128;
    packet_in.alt_msl = 269.0;
    packet_in.alt_ellip = 297.0;
    packet_in.alt_ground = 325.0;
    packet_in.classification = 963499960;
    packet_in.x = 381.0;
    packet_in.y = 409.0;
    packet_in.z = 437.0;
    packet_in.q = {{ 465.0, 466.0, 467.0, 468.0 }};
    packet_in.dist = 577.0;
    packet_in.vel_n = 605.0;
    packet_in.vel_e = 633.0;
    packet_in.vel_d = 661.0;
    packet_in.hdg = 689.0;
    packet_in.height = 717.0;
    packet_in.width = 745.0;
    packet_in.depth = 773.0;
    packet_in.geometry = 150;
    packet_in.approach_vector_start = {{ 801.0, 802.0, 803.0 }};
    packet_in.approach_vector_end = {{ 885.0, 886.0, 887.0 }};
    packet_in.approach_velocity = {{ 969.0, 970.0, 971.0 }};
    packet_in.name = to_char_array("ABCDEFGHIJKLMNOPQRSTUVWXYZABCDE");
    packet_in.app6_symbol = to_char_array("GHIJKLMNOPQRSTUVWXYZABCDEFGHIJ");

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
         93372036854775807ULL, 93372036854776311ULL, 93372036854776815ULL, 963498712, 963498920, 963499128, 269.0, 297.0, 325.0, 963499960, 381.0, 409.0, 437.0, { 465.0, 466.0, 467.0, 468.0 }, 577.0, 605.0, 633.0, 661.0, 689.0, 717.0, 745.0, 773.0, { 801.0, 802.0, 803.0 }, { 885.0, 886.0, 887.0 }, { 969.0, 970.0, 971.0 }, 24931, 71, 138, 205, 16, 83, 150, "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDE", "GHIJKLMNOPQRSTUVWXYZABCDEFGHIJ"
    };

    mavlink::ras_a::msg::POI_REPORT packet_in{};
    packet_in.uid = 93372036854775807ULL;
    packet_in.time_boot_ms = 963498712;
    packet_in.time_utc_detected = 93372036854776311ULL;
    packet_in.time_utc_updated = 93372036854776815ULL;
    packet_in.confidence_overall = 71;
    packet_in.confidence_detection = 138;
    packet_in.confidence_classification = 205;
    packet_in.confidence_localization = 16;
    packet_in.ttl = 24931;
    packet_in.status_flags = 83;
    packet_in.latitude = 963498920;
    packet_in.longitude = 963499128;
    packet_in.alt_msl = 269.0;
    packet_in.alt_ellip = 297.0;
    packet_in.alt_ground = 325.0;
    packet_in.classification = 963499960;
    packet_in.x = 381.0;
    packet_in.y = 409.0;
    packet_in.z = 437.0;
    packet_in.q = {{ 465.0, 466.0, 467.0, 468.0 }};
    packet_in.dist = 577.0;
    packet_in.vel_n = 605.0;
    packet_in.vel_e = 633.0;
    packet_in.vel_d = 661.0;
    packet_in.hdg = 689.0;
    packet_in.height = 717.0;
    packet_in.width = 745.0;
    packet_in.depth = 773.0;
    packet_in.geometry = 150;
    packet_in.approach_vector_start = {{ 801.0, 802.0, 803.0 }};
    packet_in.approach_vector_end = {{ 885.0, 886.0, 887.0 }};
    packet_in.approach_velocity = {{ 969.0, 970.0, 971.0 }};
    packet_in.name = to_char_array("ABCDEFGHIJKLMNOPQRSTUVWXYZABCDE");
    packet_in.app6_symbol = to_char_array("GHIJKLMNOPQRSTUVWXYZABCDEFGHIJ");

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
