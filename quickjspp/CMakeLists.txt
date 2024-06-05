cmake_minimum_required(VERSION 3.10)

project(quickjspp C CXX)

add_library(quickjspp INTERFACE)

target_include_directories(quickjspp INTERFACE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(quickjspp INTERFACE quickjs)

target_compile_options(quickjspp INTERFACE -Wa,-mbig-obj)

