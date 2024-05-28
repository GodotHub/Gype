cmake_minimum_required(VERSION 3.10)

# 设置C和C++编译器
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
set(GODOT_COMPILE_FLAGS "-fno-omit-frame-pointer -O0 -g")

set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY COMPILE_FLAGS ${GODOT_COMPILE_FLAGS})

# 项目名称和语言
project(gype C CXX)

# add_subdirectory(godot-cpp)

# 包含include目录和所有子目录
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include/qjs)

add_subdirectory(godot-cpp)

# 添加必要的编译选项
add_definitions(-DGNU_SOURCE)
add_definitions(-DCONFIG_BIGNUM)
add_definitions(-DCONFIG_VERSION="2024-05-20")

# 查找src目录和所有子目录中的.c和.cpp文件
file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.c ${PROJECT_SOURCE_DIR}/src/*.cpp)

# 添加动态库
add_library(gype SHARED ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(gype godot-cpp)

target_compile_features(${PROJECT_NAME}
	PRIVATE
		cxx_std_17
)

target_link_options(${PROJECT_NAME} PRIVATE
	-static-libgcc
	-static-libstdc++
	-static
)

target_compile_definitions(${PROJECT_NAME} PUBLIC
    DEBUG_ENABLED
    DEBUG_METHODS_ENABLED
)

# 设置库的版本
set_target_properties(gype PROPERTIES VERSION 1.0.0 SOVERSION 10000)
