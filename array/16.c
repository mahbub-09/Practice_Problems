#include <stdio.h>
int main()
{
    int n, cnt = 0;
    printf("Enter Array Size : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements :\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int value;
    printf("Enter the number: ");
    scanf("%d", &value);

    for(int i = 0; i < n; i++){
        ++cnt;
        if(arr[i] == value){
            break;
        }
    }

    printf("Found at index: %d\n", cnt);

    return 0;
}