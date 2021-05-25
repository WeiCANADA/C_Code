#include <stdio.h>

//
// Created by ThinkPad on 2021/5/6.
//
int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int yearS, yearN;
    int monthS, monthN;
    int dayS, dayN;
    long count = 0;

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

    return 0;
    }



