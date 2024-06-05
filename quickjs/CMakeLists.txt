cmake_minimum_required(VERSION 3.10)

project(quickjs C CXX)

file(GLOB_RECURSE SOURCE
	${PROJECT_SOURCE_DIR}/src/*.c**)
file(GLOB_RECURSE HEADERS 
	${PROJECT_SOURCE_DIR}/include/*.h**)

add_library(quickjs STATIC ${SOURCE})

target_include_directories(quickjs PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 添加必要的编译选项
target_compile_definitions(quickjs PRIVATE 
    -DGNU_SOURCE 
    -DCONFIG_BIGNUM 
    -DCONFIG_VERSION="2024-05-20")
