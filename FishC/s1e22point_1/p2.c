//
// Created by ThinkPad on 2021/5/9.
//请自行观察你当前系统对中文字符的处理方式(p1.c)，并设计一个可以统计中文字符以及中英文混合字符的程序。
//中文字符占用4个字节,且是负数.
//判断中文的方法判断数组值是否为负数如果为负数
#include <stdio.h>
#include <string.h>

#define MAX 1024

int main()
{
    char str[MAX];
    char *ps = str;
    char ch;
    int strLen = 0;


    setbuf(stdout, 0);
    printf("Enter a String:");
    fgets(ps, MAX, stdin);//从输入流读取string 并存入数组

    /* size_t length = sizeof(ps) / sizeof(*ps);
     size_t length1 = sizeof(str) / sizeof(str[0]);
    printf("%llu\n%llu", length, length1);*/

   while (1)
    {
       ch = *ps++;

       if(ch == '\0')
       {
           break;
       }
       if((int)ch < 0)
       {
           ps += 3;
       }
       strLen++;
    }

    size_t i = strlen(str);

    //fgets 函数会把换行符（'\n'）也一并读取进去，但我们并不希望把它也计算进去
    printf("String length = %d\n", strLen - 1);

    printf("String length = %llu\n", i);

    return 0;
}

