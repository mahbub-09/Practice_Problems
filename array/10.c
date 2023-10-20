#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter Array Elements: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        printf("\n");
    }

    printf("Avg = %.1f\n", (float)sum / n);



    return 0;
}