//
// Created by ThinkPad on 2021-05-28.
//
/*
void bubble_sort(int arr[], int size)
{
    //ȷ��ð�����������size -1
    for (int i = 0; i < size -1 ; i++) {

        //ÿһ��ð������
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
//�Ż�
void bubble_sort(int arr[], int size)
{
    //ȷ��ð�����������size -1
    for (int i = 0; i < size -1 ; i++)
    {

        //ÿһ��ð������
        for (int j = 0; j < size-1-i; j++)
        {

           // _Bool flag = 1;//������һ�����������Ѿ�����

            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

         //       flag = 0;//��������Ķ�������ʵ����ȫ����
            }
            /*if(flag == 1)
            {
                break;
            }*/
        }
    }
}

