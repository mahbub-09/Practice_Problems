#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Your values: \n");
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }


    return 0;
}