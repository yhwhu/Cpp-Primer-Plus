cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 14)

project(ch10_1)
project(ch10_2)
add_executable(ch10_1 Chapter10/bank.cpp Chapter10/bank_main.cpp)
add_executable(ch10_2 chapter10/person.cpp Chapter10/person_main.cpp)


project(Cpp_Primer_Plus)
include_directories(/usr/local/include)
link_directories(/usr/local/lib)
link_libraries(armadillo)
add_executable(Cpp_Primer_Plus main.cpp)
target_link_libraries(Cpp_Primer_Plus armadillo)
