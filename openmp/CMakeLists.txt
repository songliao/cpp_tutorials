cmake_minimum_required(VERSION 3.20)

add_executable(openmp_example main.cpp)

find_package(OpenMP)
target_link_libraries(openmp_example PUBLIC OpenMP::OpenMP_CXX)
