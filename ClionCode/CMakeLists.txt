cmake_minimum_required(VERSION 3.19)
project(ClionCode C)

set(CMAKE_C_STANDARD 99)
add_executable(maxFunction functionsStudy/functionDeclarations/maxFunction.c functionsStudy/functionDeclarations/myMath1.h  functionsStudy/functionDeclarations/text.c )
add_executable(p3 functionsStudy/p3.c)
add_executable(concept functionsStudy/recursiveStudy/concept.c functionsStudy/recursiveStudy/myRecursive.h functionsStudy/recursiveStudy/test.c functionsStudy/recursiveStudy/my_strlen.c functionsStudy/recursiveStudy/myFactorial.c functionsStudy/recursiveStudy/myFib.c)