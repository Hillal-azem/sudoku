cmake_minimum_required(VERSION 3.13)
project(sudoku)

set(CMAKE_CXX_STANDARD 14)

add_executable(sudoku main.cpp Board.cpp Board.h Region.cpp Region.h Box.cpp Box.h)