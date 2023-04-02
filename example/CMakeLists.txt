add_executable(RGEExample example.cpp)

add_dependencies(RGEExample RGE)

target_link_libraries(RGEExample PUBLIC RGE)