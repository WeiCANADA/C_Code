#include <stdio.h>

//
// Created by ThinkPad on 2021/5/6.
//
int main()
{
    int a[]= {31,28,31,30,31,30,31,31,30,31,30,31};

    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        a[1] = 29;
    }
    printf("%d:\n", year);
    for (int i = 0; i < 12; i++)
    {

        printf("Month:%d have %d days.\n", i+1, a[i]);
    }

    return 0;
}

