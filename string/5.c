#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char str1[500], str2[500];
    printf("String1: ");
    gets(str1);

    printf("String2: ");
    gets(str2);

    int flag = 0;

    for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; ++i){
        if(str1[i] != str2[i]){
            ++flag;
            break;
        }
    }

    if(flag)
        printf("Not same\n");

    else
        printf("Same");


    return 0;
}
