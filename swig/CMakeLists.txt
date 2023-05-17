cmake_minimum_required(VERSION 3.25)

FIND_PACKAGE(SWIG REQUIRED)
INCLUDE(${SWIG_USE_FILE})


set_property(SOURCE example.i PROPERTY CPLUSPLUS ON)

find_package(JNI)
swig_add_library(exampleJava LANGUAGE java SOURCES example.i)

target_include_directories(exampleJava PUBLIC ${JNI_INCLUDE_DIRS})
target_link_libraries(exampleJava PRIVATE exampleCPP)