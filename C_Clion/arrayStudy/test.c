//
// Created by ThinkPad on 2021-05-28.
//
#include "myArray.h"

int main()
{
    //创建一个待排序的数组
    int arr[] = {1,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    //对arr进行升序排列
    bubble_sort(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d",arr[i]);
    }

    return 0;
}