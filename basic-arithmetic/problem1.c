#include <stdio.h>
int main()
{
    double n1, n2, result;
    printf("A = ");
    scanf("%lf", &n1);
    printf("B = ");
    scanf("%lf", &n2);

    result = ((n1 + n2)*(n1 - n2)) / (n1 * n2);

    printf("Result = %.2lf\n", result);


    return 0;
}