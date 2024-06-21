cmake_minimum_required(VERSION 3.10)

# 项目名称和语言
project(godot-cpp C CXX)

file(GLOB_RECURSE GODOT_SOURCES
	${PROJECT_SOURCE_DIR}/src/*.c**
	${PROJECT_SOURCE_DIR}/gen/src/*.c**)
file(GLOB_RECURSE GODOT_HEADERS
	${PROJECT_SOURCE_DIR}/include/*.h**
	${PROJECT_SOURCE_DIR}/gen/include/*.h**
	${PROJECT_SOURCE_DIR}/gdextension/*.h**)

# 添加静态库
add_library(godot-cpp STATIC ${GODOT_SOURCES})

target_compile_options(godot-cpp PUBLIC 
	-fno-omit-frame-pointer -O0 -g)

# 包含include目录和所有子目录
target_include_directories(godot-cpp SYSTEM PUBLIC 
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/gen/include
	${PROJECT_SOURCE_DIR}/gdextension)

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