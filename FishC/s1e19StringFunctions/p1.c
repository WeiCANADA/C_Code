//
// Created by ThinkPad on 2021/5/7.
//1. 按下边要求写程序。来自：bbs.fishc.com

#include <stdio.h>
#include <string.h>

//要求 A：定义一个长度为 21 的字符数组，用于存放用户输入的文本；
//要求 B：如果用户输入的文本长度超过 20 个字符，且文本中存在空格，则截取至最接近末尾（第 20 个字符串）的空格；
//要求 C：如果用户输入的文本长度超过 20 个字符，且文本中不存在空格，则打印前 20 个字符。
int main()
{
    char str[21] = {};
    int sign = 0;//the index of the last space
    char ch ;
    int j = 0;

    printf("Enter a String:");

    while ((ch = getchar()) != '\n')
    {
        if(j < sizeof(str)/ sizeof(str[0]) -1 )
        {
            str[j] = ch;

            //sign the last space index
            if(str[j] == ' ')
            {
                sign = j;
            }

            j++;
        }
    }

    //printf("%s\n", str);
    //Distinguish spaces
   if(sign)
    {
        for (int i = 0; i <= sign ; ++i)
        {
            putchar(str[i]);
        }
    } else
    {
            printf("%s\n", str);
    }

   return 0;
}