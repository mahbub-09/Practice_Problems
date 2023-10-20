#include <stdio.h>
int main()
{
    long long int l1, w1, l2, w2, gryprt;
    printf("Enter the length and width of the first rectangle:\n");
    printf("a= ");
    scanf("%lld", &l1);
    printf("b= ");
    scanf("%lld", &w1);

    printf("Enter the length and width of the second rectangle:\n");
    printf("c= ");
    scanf("%lld", &l2);
    printf("d= ");
    scanf("%lld", &w2);

    gryprt = (l1 * w1) - (l2 * w2);

    printf("Area of the Gray part = %lld", gryprt);


    return 0;
}