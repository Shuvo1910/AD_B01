// Write a C program that takes number of days as input, and then converts it into years and days,and displays the results.

#include<stdio.h>

int main() {

    int days, year, remainingDay;

    printf("Enter number of days: ");
    scanf("%d", &days);

    year = days / 365;

    remainingDay = days % 365 ;

    printf("%d year(s) %d day(s)", year, remainingDay);

    return 0;
}
