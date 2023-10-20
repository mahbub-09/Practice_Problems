#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        printf("element-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Your elements: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}