cmake_minimum_required(VERSION 3.19)
project(ClionCode C)

set(CMAKE_C_STANDARD 99)
add_executable(ChessGotest gameChessGo/ChessGotest.c gameChessGo/game.c gameChessGo/game.h)
add_executable(p0 OperatorStudy/p0.c)
add_executable(p1 OperatorStudy/p1.c)