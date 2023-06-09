cmake_minimum_required(VERSION 3.25)

add_library(exampleCPP SHARED example.cpp)

find_package(OpenMP)
