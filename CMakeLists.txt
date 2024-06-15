cmake_minimum_required(VERSION 3.10)

# 设置C和C++编译器
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# 项目名称和语言
project(gype C CXX)

# find_program(IWYU_EXECUTABLE include-what-you-use D:/Godot/Gype/iwyu/include-what-you-use.exe REQUIRED)

add_subdirectory(godot-cpp)
add_subdirectory(quickjs)

# 查找src目录和所有子目录中的.c和.cpp文件
file(GLOB_RECURSE SOURCE
	${PROJECT_SOURCE_DIR}/src/*.c**)
file(GLOB_RECURSE HEADERS 
	${PROJECT_SOURCE_DIR}/include/*.h**)

# 添加动态库
add_library(gype SHARED ${SOURCE})

target_link_libraries(gype PUBLIC godot-cpp)
target_link_libraries(gype PUBLIC quickjs)

target_include_directories(gype PUBLIC
	${PROJECT_SOURCE_DIR}/include)
	# ${PROJECT_SOURCE_DIR}/iwyu/lib/clang/18/include)

# set_target_properties(gype PROPERTIES CXX_INCLUDE_WHAT_YOU_USE ${IWYU_EXECUTABLE})
# target_compile_options(gype PUBLIC -DCMAKE_EXPORT_COMPILE_COMMANDS=ON)

target_compile_options(gype PUBLIC 
	-Wall -O0 -g)

set_target_properties(gype PROPERTIES 
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension)

# 设置库的版本
set_target_properties(gype PROPERTIES VERSION 1.0.0 SOVERSION 10000)
