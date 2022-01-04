//
// Created by ThinkPad on 2021-08-03.
//

#include <stdio.h>
#include <math.h>

int main()
{
    //NarcissisticNumber

    //确定范围
    int max = 100000;
    int min = 10;
    for (int i = min; i <= max; i++) {

        //  确定num的幂n
        int n = 1;
        int temp = i;
        while (temp /= 10)
        {
            n++;
        }
        //求和sum
        int sum = 0;
        temp = i;
        while(temp)
        {
           sum += (int) pow(temp % 10,n);
           temp /= 10;

        }
        //比较sum 和 num
        if(i == sum)
        {
            printf ("%d ", i);

        }
    }

    return 0;
}
