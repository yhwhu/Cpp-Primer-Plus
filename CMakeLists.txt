cmake_minimum_required(VERSION 3.14)
project(Cpp_Primer_Plus)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp_Primer_Plus main.cpp)
add_executable(Cpp_test test.cpp)
add_executable(hw hw6/main.cpp hw6/matrix.cpp)
add_executable(ch10_1 Chapter10/bank.cpp Chapter10/bank_main.cpp)
add_executable(ch10_2 chapter10/person.cpp Chapter10/person_main.cpp)