cmake_minimum_required(VERSION 3.10)

# Set the C and C++ compilers to gcc and g++, respectively
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Option to generate a template for the "Get Node" feature, turned off by default
set(GENERATE_TEMPLATE_GET_NODE OFF)

# Define the project name and the programming languages used
project(gype C CXX)

# Include subdirectories for external libraries or modules
# These directories contain their own CMake configuration for building
add_subdirectory(godot-cpp)  # Adds the godot-cpp subdirectory for Godot C++ bindings
add_subdirectory(quickjs)    # Adds the quickjs subdirectory for the QuickJS JavaScript engine
add_subdirectory(tree-sitter) # Adds the tree-sitter subdirectory for the Tree-sitter parser library

# Recursively search for all .c and .cpp files in the src directory and its subdirectories
file(GLOB_RECURSE SOURCE
    ${PROJECT_SOURCE_DIR}/src/*.c**)

# Recursively search for all .c and .cpp files in the test directory and its subdirectories
file(GLOB_RECURSE TEST
    ${PROJECT_SOURCE_DIR}/test/**/*.c**)

# Recursively search for all .h and .hpp files in the include directory
file(GLOB_RECURSE HEADERS 
    ${PROJECT_SOURCE_DIR}/include/*.h**)

# Create a shared library target named "gype" using the source files found
add_library(gype SHARED ${SOURCE} ${TEST})

# Link the "gype" target with the QuickJS library
target_link_libraries(gype PRIVATE quickjs)

# Link the "gype" target with the Tree-sitter library
target_link_libraries(gype PRIVATE tree-sitter)

# Specify the include directories for the "gype" target
# These directories will be searched for header files during compilation
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

# Configure compilation options for the "gype" target
# -Wall enables all compiler warnings
# -O0 disables optimization for easier debugging
# -g includes debugging information in the compiled binary
# -s strips the binary for reducing size
# -DDEBUG_ENABLED defines a preprocessor macro for enabling debug mode
target_compile_options(gype PUBLIC 
    -Wall -O3 -g -s
    -DDEBUG_ENABLED)

# Configure the output directories for different types of binaries
# This sets the output path for runtime executables, shared libraries, and static archives
set_target_properties(gype PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/example/addons/gype/extension)

# Set the version properties for the "gype" shared library
# VERSION specifies the actual version number of the library
# SOVERSION specifies the ABI version, which clients can use for compatibility checks
set_target_properties(gype PROPERTIES VERSION 1.0.0 SOVERSION 10000)
