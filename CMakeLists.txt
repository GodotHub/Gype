cmake_minimum_required(VERSION 3.10)

# 设置C和C++编译器
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# 项目名称和语言
project(gype C CXX)

# 包含include目录和所有子目录
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include/qjs)

# 添加必要的编译选项
add_definitions(-DGNU_SOURCE)
add_definitions(-DCONFIG_BIGNUM)
add_definitions(-DCONFIG_VERSION="2024-05-20")

# 查找src目录和所有子目录中的.c和.cpp文件
file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.c ${PROJECT_SOURCE_DIR}/src/*.cpp)

# 添加动态库
add_library(gype SHARED ${SOURCE_FILES} ${HEADER_FILES})

# 设置库的版本
set_target_properties(gype PROPERTIES VERSION 1.0.0 SOVERSION 10000)
