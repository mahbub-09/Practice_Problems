#include <stdio.h>
int main()
{
    int n, big;
    printf("Array size = ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    big = (arr[0] > arr[1]) ? arr[0]:arr[1];
    for (int i = 2; i < n; i++){
        big = (big > arr[i]) ? big : arr[i];
    }

    printf("Maximum: %d \n", big);


    return 0;
}