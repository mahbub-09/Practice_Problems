#include <stdio.h>
int main()
{
    long long int profit, sell ,cost;
    printf("Enter profit: ");
    scanf("%lld", &profit);
    printf("Enter Selling price: ");
    scanf("%lld", &sell);

    cost = (100 * sell) / (100 + profit);

    printf("Cost Price: %lld\n", cost);


    return 0;
}