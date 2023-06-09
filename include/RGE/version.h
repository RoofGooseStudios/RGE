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


#ifndef RGE_VERSION_HEADER_INCLUDED
#define RGE_VERSION_HEADER_INCLUDED
#pragma once

#include <cstdint>
#include <string>

namespace RGE::version {

/**
 * @brief Get the semantic version of the library.
 * 
 * @return std::string 
 */
std::string get_version();

/**
 * @brief Get the major version of the library.
 * 
 * @return std::uint16_t
 */
std::uint16_t get_major_version();

/**
 * @brief Get the minor version of the library.
 * 
 * @return std::uint16_t
 */
std::uint16_t get_minor_version();

/**
 * @brief Get the patch version of the library.
 * 
 * @return std::uint16_t 
 */
std::uint16_t get_patch_version();

} // end namespace RGE::version

#endif // RGE_VERSION_HEADER_INCLUDED