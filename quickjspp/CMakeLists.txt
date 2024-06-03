cmake_minimum_required(VERSION 3.10)

# 设置C和C++编译器
set(CMAKE_C_COMPILER D:/mingw64/bin/gcc.exe)
set(CMAKE_CXX_COMPILER D:/mingw64/bin/g++.exe)

project(quickjspp C CXX)

add_library(quickjspp INTERFACE)

target_include_directories(quickjspp INTERFACE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(quickjspp INTERFACE quickjs)

target_compile_options(quickjspp INTERFACE -Wa,-mbig-obj)

