#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not leap year\n");
    }



    return 0;
}
