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
        -O0 -g)

target_compile_features(${PROJECT_NAME}
	PRIVATE
		cxx_std_17
)
# 添加必要的编译选项
target_compile_definitions(quickjs PRIVATE 
    -D_GNU_SOURCE
    -DCONFIG_BIGNUM
    # -DDUMP_PROMISE
    # -DDUMP_LEAKS
    # -DDUMP_MODULE_RESOLVE
    -DCONFIG_VERSION="2024-05-20")
