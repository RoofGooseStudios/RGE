/*
 Copyright (c) 2023 Alexander Remm

 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

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