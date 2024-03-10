cmake_minimum_required(VERSION 3.10)
project(Kelly_Calculator)

# Globally enable C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories for library
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Generate library
add_library(${PROJECT_NAME} ${SOURCES})

