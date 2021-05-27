//
// Created by ThinkPad on 2021-05-27.
//���ֲ���
//��һ�����������в��Ҿ���ĳ����
//����ҵ��˷�����������±�,�Ҳ�������-1
#include <stdio.h>

//���ַ����Һ���
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
    int k = 7;//Ҫ���ҵ�����
    int size = sizeof(arr)/ sizeof(arr[0]);


    int ret = binary_search(arr, k, size);

    if(ret == -1)
    {
        printf("û���ҵ���Ӧ������!\n");
    }else
    {
        printf("����%d��Ӧ��������±���:%d",k, ret);
    }

    return 0;
}