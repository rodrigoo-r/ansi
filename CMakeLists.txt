cmake_minimum_required(VERSION 3.31)
project(ansi C)

set(CMAKE_C_STANDARD 11)

add_library(ansi STATIC ansi.c)
