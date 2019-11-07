cmake_minimum_required(VERSION 3.14)
project(Corto1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Corto1 main.c)
target_link_libraries(Corto1 m)