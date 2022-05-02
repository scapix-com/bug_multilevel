cmake_minimum_required(VERSION 3.22)

project(example)

add_executable(example example.cpp)
target_link_libraries(example lib)
