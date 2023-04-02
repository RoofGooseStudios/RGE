include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.13.0
    GIT_SHALLOW    True
    OVERRIDE_FIND_PACKAGE
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB_RECURSE TEST_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

message(${TEST_FILES})

add_executable(RGETest ${TEST_FILES})

add_dependencies(RGETest GTest::gtest_main RGE)

target_link_libraries(RGETest
    GTest::gtest_main
    RGE
)

include(GoogleTest)
gtest_discover_tests(RGETest)
