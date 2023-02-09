cmake_minimum_required(VERSION 3.13) # CMake version check
project(dependency_injection_coding_assignment)# Create project "dependency_injection_coding_assignment"
set(CMAKE_CXX_STANDARD 11)# Enable c++11 standard

# Add accountwith.cpp file of project root directory as source file
set(SOURCE_FILES accountwith.cpp)
set(HEADERS accountwith.hpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(dependency_injection_coding_assignment ${SOURCE_FILES})