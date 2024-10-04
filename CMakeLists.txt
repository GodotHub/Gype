cmake_minimum_required(VERSION 3.10)

# 设置C和C++编译器
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

set(GENERATE_TEMPLATE_GET_NODE OFF)

# 项目名称和语言
project(gype C CXX)

add_subdirectory(godot-cpp)
add_subdirectory(quickjs)
add_subdirectory(tree-sitter)

# 查找src目录和所有子目录中的.c和.cpp文件
file(GLOB_RECURSE SOURCE
	${PROJECT_SOURCE_DIR}/src/*.c**)
file(GLOB_RECURSE TEST
	${PROJECT_SOURCE_DIR}/test/**/*.c**)
file(GLOB_RECURSE HEADERS 
	${PROJECT_SOURCE_DIR}/include/*.h**)

# 添加动态库
add_library(gype SHARED ${SOURCE} ${TEST})

target_link_libraries(gype PRIVATE quickjs)
target_link_libraries(gype PRIVATE tree-sitter)

target_include_directories(gype PUBLIC
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/quickjs/include
	${PROJECT_SOURCE_DIR}/tree-sitter/src
	${PROJECT_SOURCE_DIR}/test
)

target_compile_features(${PROJECT_NAME}
	PRIVATE
		cxx_std_17
)

target_compile_options(gype PUBLIC 
	-Wall -O0 -g -DDEBUG_ENABLED)

set_target_properties(gype PROPERTIES 
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension)

# 设置库的版本
set_target_properties(gype PROPERTIES VERSION 1.0.0 SOVERSION 10000)
