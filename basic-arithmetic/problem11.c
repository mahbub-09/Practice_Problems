#include <stdio.h>
int main()
{
    long long int day, week, year;
    printf("Enter Number of Days: ");
    scanf("%lld", &day);

    year = day / 365;
    week = (day - (year * 365)) / 7;
    day = day - year * 365 - week * 7;

    printf("Years = %lld\n", year);
    printf("Weeks = %lld\n", week);
    printf("Days = %lld\n", day);


    return 0;
}