//
// Created by ThinkPad on 2021-05-28.
//
/*
void bubble_sort(int arr[], int size)
{
    //确定冒泡排序的趟数size -1
    for (int i = 0; i < size -1 ; i++) {

        //每一趟冒泡排序
        for (int j = 0; j < size-1-i; j++) {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}
*/
//***************************
//优化
void bubble_sort(int arr[], int size)
{
    //确定冒泡排序的趟数size -1
    for (int i = 0; i < size -1 ; i++)
    {

        //每一趟冒泡排序
        for (int j = 0; j < size-1-i; j++)
        {

           // _Bool flag = 1;//假设这一趟排序数据已经有序

            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

         //       flag = 0;//本趟排序的额数据其实不完全有序
            }
            /*if(flag == 1)
            {
                break;
            }*/
        }
    }
}

