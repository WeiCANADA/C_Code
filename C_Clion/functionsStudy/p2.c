//
// Created by ThinkPad on 2021-05-27.
//二分查找
//在一个有序数组中查找具体某个数
//如果找到了返回这个数的下标,找不到返回-1
#include <stdio.h>

//二分法查找函数
int binary_search(const int arr[], int k, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right)/2;

        if(arr[mid] < k)
        {
            left = mid + 1;
        }else if(arr[mid] > k)
        {
            right = mid - 1;
        }else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;//要查找的数字
    int size = sizeof(arr)/ sizeof(arr[0]);


    int ret = binary_search(arr, k, size);

    if(ret == -1)
    {
        printf("没有找到对应的数字!\n");
    }else
    {
        printf("数字%d对应数组里的下标是:%d",k, ret);
    }

    return 0;
}