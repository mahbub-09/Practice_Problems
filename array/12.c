#include <stdio.h>
int main()
{
    int n, small;
    printf("Array size = "); //size must be greater than 1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    small = (arr[0] < arr[1]) ? arr[0]:arr[1];
    for (int i = 2; i < n; i++){
        small = (small < arr[i]) ? small : arr[i];
    }

    printf("Minimum: %d \n", small);


    return 0;
}