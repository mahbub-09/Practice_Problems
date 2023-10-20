#include <stdio.h>
int main()
{
    double p, t, r, i; //p for principle, t for time, r for rate of interest & i for simple interest
    printf("Enter Principle: ");
    scanf("%lf", &p);
    printf("Enter Time: ");
    scanf("%lf", &t);
    printf("Enter Rate: ");
    scanf("%lf", &r);

    i = (p * t * r) / 100;

    printf("Simple Interest: %.0lf\n", i);


    return 0;
}