# TODO: Set your preferred CMake minimum version
cmake_minimum_required(VERSION 3.15)

# TODO: Set your preferred project name, version, language(s)
project(SimpleTemplate VERSION 0.1.0 LANGUAGES CXX)

# TODO: Set your preferred project settings
set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
# set(CMAKE_C_EXTENSIONS OFF)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -std=c++20 -Wno-multichar")
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}" -Wall)

add_subdirectory(src)
