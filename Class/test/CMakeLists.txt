project(Class_test)

add_executable(Class_test main_test.cpp)

target_link_libraries(Class_test Class gtest)

enable_testing()
add_test(
        NAME Car_test
        COMMAND Car_test
)