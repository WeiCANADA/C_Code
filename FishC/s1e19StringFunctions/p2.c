//
// Created by ThinkPad on 2021/5/7.
//要求 A：统计用户输入的所有字符个数；
//要求 B：统计不同的字符个数，并打印出来；
//要求 C：找出出现次数最多的字符。
//
#include <stdio.h>
#include <string.h>

#define MAX 128

int main()
{
    int  ch, i = 0, j = 0, max = 0;
    int input_num = 0;
    int ascii[MAX] = {0};
    char count[MAX] = "";

    printf("Enter a String:");

    while( (ch = getchar()) != '\n')
    {
        ascii[ch]++;//index as ch , value as count the times
        input_num++;
    }

    //遍历数组ascii
    for (i = 0; i < MAX; ++i)
    {
        if(ascii[i])
        {
            count[j++] = i;//使用数组count[] 数组ascii 的index,用来统计不同字符个数
            if(ascii[i] > ascii[max])//找出出现次数最多的字符.
            {
                max = i;
            }
        }
    }
    printf("Total characters: %d,The different characters are %llu\n", input_num, strlen(count));
    printf("Character type statistics: %s\n", count);
    printf("The most frequent character is \'%c\',"
           "The total number of occurrences is %d\n", max, ascii[max]);

    return 0;
}
