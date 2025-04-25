cmake_minimum_required(VERSION 3.10)

# Project name
project(AWTypeConversions)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(main main.cpp Conversions.cpp)