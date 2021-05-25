#include <stdio.h>

//
// Created by ThinkPad on 2021/5/6.
//
int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int yearS, yearN, yearE;
    int monthS, monthN ,monthE;
    int dayS, dayN, dayE;
    long count = 0, count1 = 0;

    printf("Enter your birthday(1970-01-01):");
    scanf("%d-%d-%d", &yearS, &monthS, &dayS);

    printf("Enter the date of Today(1970-01-01):");
    scanf("%d-%d-%d", &yearN, &monthN, &dayN);

    while (yearS <= yearN)
    {
       days[1] = yearS % 400 == 0 || (yearS % 4 == 0 && yearS % 100 != 0) ? 29 : 28;

        while (monthS <= 12)
        {
            while (dayS <= days[monthS - 1])
            {
                count++;
                dayS++;
            }
            dayS = 1;
            monthS++;
        }

       monthS = 1;
       yearS++;
    }

    printf("You have been %ld days in this world!\n",count);

    printf("Enter the date of yourLife(1970-01-01):");
    scanf("%d-%d-%d", &yearE, &monthE, &dayE);
    while (yearN <= yearE)
    {
        days[1] = yearN % 400 == 0 || (yearN % 4 == 0 && yearN % 100 != 0) ? 29 : 28;

        while (monthN <= 12)
        {
            while (dayN <= days[monthN - 1])
            {
                count1++;
                dayN++;
            }
            dayN = 1;
            monthN++;
        }

        monthN = 1;
        yearN++;
    }

    printf("If your predict age is 80,you have %ld days left\n",count1);
    printf("you have spent of your %.2f%% life", 100*(float)count/((float)count + (float)count1) );

    return 0;
    }



