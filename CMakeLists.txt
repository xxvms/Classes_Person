cmake_minimum_required(VERSION 3.8)
project(Classes_Person)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h)
add_executable(Classes_Person ${SOURCE_FILES})