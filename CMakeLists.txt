cmake_minimum_required(VERSION 4.0)
project(C_Storage C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Storage
        main.c
        errors.h)
