//
// Created by ThinkPad on 2021-08-03.
//

#include <stdio.h>
#include <math.h>

int main()
{
    //NarcissisticNumber

    //ȷ����Χ
    int max = 100000;
    int min = 10;
    for (int i = min; i <= max; i++) {

        //  ȷ��num����n
        int n = 1;
        int temp = i;
        while (temp /= 10)
        {
            n++;
        }
        //���sum
        int sum = 0;
        temp = i;
        while(temp)
        {
           sum += (int) pow(temp % 10,n);
           temp /= 10;

        }
        //�Ƚ�sum �� num
        if(i == sum)
        {
            printf ("%d ", i);

        }
    }

    return 0;
}
