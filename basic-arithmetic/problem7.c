#include <stdio.h>
int main()
{
    int a1, a2, a3;
    printf("First angle = ");
    scanf("%d", &a1);
    printf("Second angle = ");
    scanf("%d", &a2);

    a3 = 180 - (a1 + a2);

    printf("Third angle = %d", a3);

    return 0;
}