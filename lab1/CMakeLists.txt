cmake_minimum_required(VERSION 3.27)
project(lab1)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib)
add_subdirectory(Mymath)
add_executable(lab1 main.cpp)

target_link_libraries(lab1 lib)

target_link_libraries(lab1 Mymath)
