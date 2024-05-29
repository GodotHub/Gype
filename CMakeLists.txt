cmake_minimum_required(VERSION 3.10)

# 设置C和C++编译器
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
set(GODOT_COMPILE_FLAGS "-fno-omit-frame-pointer -O0 -g")

set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY COMPILE_FLAGS ${GODOT_COMPILE_FLAGS})

# 项目名称和语言
project(gype C CXX)

# 添加必要的编译选项
add_definitions(-DGNU_SOURCE)
add_definitions(-DCONFIG_BIGNUM)
add_definitions(-DCONFIG_VERSION="2024-05-20")


# 查找src目录和所有子目录中的.c和.cpp文件
file(GLOB_RECURSE CUSTOM_SOURCE
	${PROJECT_SOURCE_DIR}/src/*.c**)
file(GLOB_RECURSE CUSTOM_HEADERS 
	${PROJECT_SOURCE_DIR}/include/*.h**
	${PROJECT_SOURCE_DIR}/include/qjs/*.h**)

file(GLOB_RECURSE GODOT_SOURCES
	${PROJECT_SOURCE_DIR}/godot-cpp/src/*.c**
	${PROJECT_SOURCE_DIR}/godot-cpp/gen/src/*.c**)
file(GLOB_RECURSE GODOT_HEADERS
	${PROJECT_SOURCE_DIR}/godot-cpp/include/*.h**
	${PROJECT_SOURCE_DIR}/godot-cpp/gen/include/*.h**
	${PROJECT_SOURCE_DIR}/godot-cpp/gdextension/*.h**)

# 添加动态库
add_library(gype SHARED ${CUSTOM_HEADERS} ${CUSTOM_SOURCE})
# 添加静态库
add_library(godot-cpp STATIC ${GODOT_HEADERS} ${GODOT_SOURCES})


# 包含include目录和所有子目录
target_include_directories(godot-cpp SYSTEM PUBLIC 
	${PROJECT_SOURCE_DIR}/godot-cpp/include
	${PROJECT_SOURCE_DIR}/godot-cpp/gen/include
	${PROJECT_SOURCE_DIR}/godot-cpp/gdextension)

target_include_directories(gype PUBLIC
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/include/qjs)

target_link_libraries(gype PUBLIC godot-cpp)

target_compile_features(godot-cpp
	PUBLIC
		cxx_std_17
)

target_link_options(godot-cpp PUBLIC
	-static-libgcc
	-static-libstdc++
	-static
)

target_compile_definitions(godot-cpp PUBLIC
    DEBUG_ENABLED
    DEBUG_METHODS_ENABLED
)

# 设置库的版本
set_target_properties(gype PROPERTIES VERSION 1.0.0 SOVERSION 10000)
