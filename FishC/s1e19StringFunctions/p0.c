//
// Created by ThinkPad on 2021/5/7.
//0. 写一个程序模仿 strncmp 函数的实现比较两个字符串 s1 和 s2，需要满足以下要求。
//要求 A：如果 s1 > s2，输出一个正数，值是两个不同字符的差；
//要求 B：如果 s1 = s2，输出 0
//要求 C：如果 s1 < s2，输出一个负数，值是两个不同字符的差。
//
#include <stdio.h>

#define MAX 1028

int main()
{
    char str1[MAX];
    char str2[MAX];
    int ch;
    int i = 0;
    unsigned n = 0;

   //Enter String and put in Array
    printf("Enter the first String:");
    while ( (ch = getchar()) != '\n')
    {
        str1[i] = ch;
        i++;
    }

    //Enter String and put in Array
    printf("Enter the second String:");
    i = 0;
    while ((str2[i++] = getchar()) != '\n')
        ;

    //Enter n and compare
    printf("Enter the numbers to compare:");
    scanf("%u", &n);
    for (int j = 0; j < n; ++j) {
        if(str1[j] - str2[j])
        {
            i++;
            break;
        }
    }
    printf("The comparison result is: %d\n", str1[i-1]-str2[i-2]);

    return 0;
}

