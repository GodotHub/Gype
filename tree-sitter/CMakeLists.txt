cmake_minimum_required(VERSION 3.10)

project(tree-sitter C CXX)

file(GLOB_RECURSE SOURCE
	${PROJECT_SOURCE_DIR}/src/*.c**)

add_library(tree-sitter SHARED ${SOURCE})

target_link_directories(tree-sitter PUBLIC ${PROJECT_SOURCE_DIR}/bin)

target_link_libraries(tree-sitter PUBLIC tree-sitter-javascript)

target_link_options(tree-sitter PUBLIC
    -static-libgcc
    -static-libstdc++
    -static
)

target_include_directories(tree-sitter 
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src)
