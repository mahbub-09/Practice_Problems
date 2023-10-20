#include <stdio.h>
int main()
{
    long long int n1, n2;
    printf("X = ");
    scanf("%lld", &n1);
    printf("Y = ");
    scanf("%lld", &n2);

    printf("Remainder is %lld\n", n1 % n2);


    return 0;
}