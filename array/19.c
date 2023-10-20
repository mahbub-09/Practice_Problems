#include <stdio.h>
int main()
{
    int n, cnt = 0;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0){
            ++cnt;
        }
    }

    printf("No. Even Numbers: %d\n", cnt);


    return 0;
}