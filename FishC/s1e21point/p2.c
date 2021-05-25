//
// Created by ThinkPad on 2021/5/8.
//

#include <stdio.h>

int main()
{
    int i, j, n, cubed, sum = 0;

    printf("Enter an integer：");
    scanf("%d", &n);

    cubed = n * n * n;

    for (i = 1; i < cubed; i += 2)
    {
        for (j = i; j < cubed; j += 2)
        {
            sum += j;
            if (sum == cubed)
            {
                if (j - i > 4)
               {
                    printf("%d = %d + %d ... + %d\n", cubed, i, i+2, j);
                }
                else
                {
                    printf("%d = %d + %d + %d\n", cubed, i, i+2, i+4);
                }
                goto FINDIT;
            }

            if (sum > cubed)
            {
                sum = 0;
                break;
            }
        }
    }

    FINDIT:

    return 0;
}