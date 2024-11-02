cmake_minimum_required(VERSION 3.10)

project(quickjs C CXX)

file(GLOB_RECURSE SOURCE
	${PROJECT_SOURCE_DIR}/src/*.c**)
file(GLOB_RECURSE HEADERS 
	${PROJECT_SOURCE_DIR}/include/*.h**)

add_library(quickjs STATIC ${SOURCE})

target_include_directories(quickjs 
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(quickjs PUBLIC godot-cpp)

target_compile_options(quickjs 
    PRIVATE 
        -O3 -g -s)

target_compile_features(${PROJECT_NAME}
	PRIVATE
		cxx_std_17
)
# 添加必要的编译选项
target_compile_definitions(quickjs PUBLIC 
    -D_GNU_SOURCE
    -DCONFIG_BIGNUM
    -DCONFIG_ALL_UNICODE
    # -DDUMP_PROMISE
    # -DDUMP_LEAKS
    # -DDUMP_MODULE_RESOLVE
    -DCONFIG_VERSION="2024-05-20")
