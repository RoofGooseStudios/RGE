cmake_minimum_required(VERSION 3.12)

## ========================================================================== ##
##                                   RGE                                      ##
## ========================================================================== ##
project(
    RGE
    VERSION 0.1.0
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_DEBUG_POSTFIX _d)

## ========================================================================== ##
##                                   Options                                  ##
## ========================================================================== ##
option(RGE_BUILD_DOCS        "Build documentation."        ON)
option(RGE_BUILD_EXAMPLES    "Build the example programs." ON)
option(RGE_BUILD_TESTS       "Build the unit tests."       ON)
option(RGE_BUILD_SHARED_LIBS "Build the shared library."   OFF)

# Build the library
add_subdirectory(src)

# Build documentation
if (${RGE_BUILD_DOCS})
    include(cmake/build-docs.cmake)
endif(${RGE_BUILD_DOCS})

# Build examples
if (${RGE_BUILD_EXAMPLES})
    add_subdirectory(example)
endif(${RGE_BUILD_EXAMPLES})

# Build tests
if (${RGE_BUILD_TESTS})
    add_subdirectory(test)
endif(${RGE_BUILD_TESTS})


## ========================================================================== ##
##                                   Install                                  ##
## ========================================================================== ##
install(EXPORT rge-targets
    FILE rge-targets.cmake
    DESTINATION ${CMAKE_INSTALL_PREFIX}/RGE/share/cmake/RGE
)

include(CMakePackageConfigHelpers)
# Generate the config file that includes the exports
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/rge-config.cmake.in
    "${CMAKE_CURRENT_BINARY_DIR}/rge-config.cmake"
    INSTALL_DESTINATION ${CMAKE_INSTALL_PREFIX}/RGE/share/cmake/RGE
    NO_SET_AND_CHECK_MACRO
    NO_CHECK_REQUIRED_COMPONENTS_MACRO
)

write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/rge-config-version.cmake"
    VERSION "${rge_VERSION_MAJOR}.${rge_VERSION_MINOR}.${rge_VERSION_PATCH}"
    COMPATIBILITY AnyNewerVersion
)

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/rge-config.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/rge-config-version.cmake
    DESTINATION ${CMAKE_INSTALL_PREFIX}/RGE/share/cmake/RGE
)

export(EXPORT rge-targets
  FILE "${CMAKE_CURRENT_BINARY_DIR}/rge-targets.cmake"
)