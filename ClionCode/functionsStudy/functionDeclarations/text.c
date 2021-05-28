//
//add_executable(maxFunction functionsStudy/functionDeclarations/maxFunction.c functionsStudy/functionDeclarations/myMath1.h  functionsStudy/functionDeclarations/text.c)
// Created by ThinkPad on 2021-05-28.
//
#include "myMath1.h"
#include <stdio.h>

int main()
{
    int num1 =10;
    int num2 =20;

    int max = Max(num1, num2);

    printf("max = %d\n",max);

    return 0;
}

