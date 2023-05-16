cmake_minimum_required(VERSION 3.25)

project(siwg_examples VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED True)

include_directories(include)

add_subdirectory(swig)
add_subdirectory(src)
