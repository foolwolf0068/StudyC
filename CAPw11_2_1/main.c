#include <stdio.h>
#include <stdlib.h>
struct date{
        int month;
        int day;
        int year;
    };
int main()
{

    struct date today;
    today.month = 07;
    today.day = 29;
    today.year = 2019;
    printf("Today's date is %i-%i-%i!\n",\
           today.year, today.month, today.day);
    struct date thismonth = {.month = 7, .year = 2019};
    printf("This month is %i-%i-%i!\n",\
           thismonth.year, thismonth.month, thismonth.day);
    struct date tomorrow;
    tomorrow = (struct date){9, 25, 2020};
    printf("Tomorrow is %i-%i-%i!\n", tomorrow.year, tomorrow.month, tomorrow.day);
    tomorrow = (struct date){.month = 19, .day = 25, 2021};
    printf("Tomorrow is %i-%i-%i!\n", tomorrow.year, tomorrow.month, tomorrow.day);
    struct date *pDate = &today;
printf("Tomorrow is %i-%i-%i!\n", pDate->year, pDate->month, pDate->day);

    return 0;
}
