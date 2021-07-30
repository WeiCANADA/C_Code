cmake_minimum_required(VERSION 3.19)
project(ClionCode C)

set(CMAKE_C_STANDARD 99)
add_executable(ChessGotest gameChessGo/ChessGotest.c gameChessGo/game.c gameChessGo/game.h pointer/p0.c)
add_executable(p0 pointer/pointerAdvanture/p0.c)
add_executable(p1 20210628function_Pointer/p1.c)

add_executable(main main.c)

add_executable(p2 20210628function_Pointer/p2.c)

add_executable(parameter_1D_Array "20210628Parameter Type/parameter_array.c")
add_executable(parameter_pointer "20210628Parameter Type/parameter_pointer.c")

add_executable(p3 20210628function_Pointer/p3.c)
add_executable(test arrayStudy/test.c)
add_executable(myArray arrayStudy/myArray.h)
add_executable(function_bubble_Sort arrayStudy/function_bubble_Sort.c)
add_executable(p4 20210628function_Pointer/p4.c)