#include <RGE/version.h>

#include <gtest/gtest.h>

TEST(RGEVersion, RGE_VERSION_MAJOR) {
    EXPECT_EQ(RGE::version::get_major_version(), 0);
}

TEST(RGEVersion, RGE_VERSION_MINOR) {
    EXPECT_EQ(RGE::version::get_minor_version(), 1);
}

TEST(RGEVersion, RGE_VERSION_PATCH) {
    EXPECT_EQ(RGE::version::get_patch_version(), 0);
}

TEST(RGEVersion, RGE_STRING_VERSION) {
    EXPECT_EQ(RGE::version::get_version(), "0.1.0");
}