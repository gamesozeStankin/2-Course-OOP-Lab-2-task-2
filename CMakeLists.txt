cmake_minimum_required(VERSION 3.16)
project(oop_lab2_2)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(modules/googletest)
add_subdirectory(Class)

add_executable(oop_lab2_2 main.cpp)

target_link_libraries(oop_lab2_2 Class)