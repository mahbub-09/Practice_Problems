#include <stdio.h>
int main()
{
    int n, big, small;
    printf("Array size = ");
    scanf("%d", &n);
    int arr[n];

    //Taking array element as input from user
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //determining the maximum value
    big = (arr[0] > arr[1]) ? arr[0] : arr[1];
    for (int i = 2; i < n; i++){
        big = (big > arr[i]) ? big : arr[i];
    }

    //determining the minimum value
    small = (arr[0] < arr[1]) ? arr[0] : arr[1];
    for (int i = 2; i < n; i++){
        small = (small < arr[i]) ? small : arr[i];
    }


    printf("Maximum: %d\n", big);
    printf("Minimum: %d\n", small);


    return 0;
}