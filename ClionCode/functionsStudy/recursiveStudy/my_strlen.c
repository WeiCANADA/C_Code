//
// Created by ThinkPad on 2021-05-28.
//编写函数不允许创建临时变量，求字符串的长度。
//

//有临时变量的函数
 /*int my_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')
    {
        str++;
        count++;
    }

    return count;
}*/

 //无临时变量通过recursive实现
 int my_strlen(char* str)
 {
     if(*str != '\0')
     {
         return 1 + my_strlen(str+1);
     } else
     {
         return 0;
     }
 }

