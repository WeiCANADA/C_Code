//
// Created by ThinkPad on 2021-05-18.
//数组指针:int (*p2)[5];
//因为圆括号和数组下标位于同一个优先级队列,由于它们的结合性都是从左到右，
// 所以 p2 先被定义为一个指针变量。后边还紧跟着一个具有 5 个元素的数组，
// p2 指向的就是它。由于指针变量的类型事实上就是它所指向的元素的类型，
// 所以这个 int 就是定义数组元素的类型为整型
//

#include <stdio.h>

int main()
{
    int temp[5] = {1, 2, 3, 4, 5};
    int (*p2)[5] = &temp;
//    int (*p3)[5] = {6, 7, 8, 9, 10};

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(*p2 + i));
    }

    return 0;
}