cmake_minimum_required(VERSION 3.21)
project(int_00 C)

set(CMAKE_C_STANDARD 99)

include_directories(include)
add_executable(int_00 main.c swap_pairs.c include/swap_pairs.h)

