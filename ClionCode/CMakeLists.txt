cmake_minimum_required(VERSION 3.19)
project(ClionCode C)

set(CMAKE_C_STANDARD 99)
add_executable(ChessGotest gameChessGo/ChessGotest.c gameChessGo/game.c gameChessGo/game.h pointer/p0.c)
add_executable(p0 structStudy/p0.c)
add_executable(p1 structStudy/p1.c)

add_executable(main main.c)

add_executable(p2 structStudy/p2.c)