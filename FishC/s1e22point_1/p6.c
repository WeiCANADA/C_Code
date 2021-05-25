//
// Created by ThinkPad on 2021-05-12.
//实现 strncat 函数，让用户输入需要连接到 str1 后边的字符个数
// （注意：该程序需要能够正确拷贝中英混合的字符串）。

#define MAX 1024

#include <stdio.h>

int main()

{
    setbuf(stdout, 0);

    char str1[MAX];
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;
    char ch = 0;
    unsigned int n = 0;

    printf("Input the first String:");
    fgets(str1, MAX, stdin);

    scanf("%u", &n);

    while (n--){

        *target2++ = *target1++;{
            ch = *target1;

            if (ch == '\0') {
                break;
            }

            if(ch < 0){
                *target2++ = *target1++;
                *target2++ = *target1++;
            }
        }
    }

    *target2 = '\n';
    printf("copy completed!");
    printf("str2:%s\n", str2);
// hello world java!
    return 0;

}


