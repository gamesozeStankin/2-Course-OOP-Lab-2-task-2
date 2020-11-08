project(Class)

add_library(Class
            Class1.cpp Class1.h
            Class2.cpp Class2.h)

target_include_directories(Class PUBLIC .)

add_subdirectory(test)