//
// Created by ThinkPad on 2021-05-13.
//实现 strncat 函数，让用户输入需要连接到 str1 后边的字符个数
// （注意：该程序需要能够正确拷贝中英混合的字符串）
#include <stdio.h>

#define MAX 1024

int main()

{
    char str1[2 * MAX];
    char str2[MAX];
    char ch;
    unsigned int n;
    char *target1 = str1;
    char *target2 = str2;

    setbuf(stdout, 0);
    printf("Input the first String and store in str1:");
    fgets(str1, MAX, stdin);
    printf("Input the second String and store in str2:");
    fgets(str2, MAX, stdin);
    printf("Input how many characters do you want to catch str1:");
    scanf("%u", &n);

    //定位str1的尾部
    while (*target1++ != '\0')
        ;
    //忽略字符'\n'和'\0'

    target1 -= 2;

    while (n--)
    {
        ch = *target1++ = *target2++;
            if(ch == '\0')
            {
                break;
            }

            if((int)ch < 0)
            {
                *target1++ = *target2++;
                *target1++ = *target2++;
            }
        }


    *target1 = '\0';
    printf("copy completed!\n");
    printf("str1: %s", str1);

    return 0;
}

