#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char str1[500], str2[500], str_merged[1200];
    printf("String1: ");
    gets(str1);

    printf("String2: ");
    gets(str2);

    int length_str1 = 0;
    for(int i = 0; str1[i] != '\0'; ++i){
        str_merged[i] = str1[i];
        ++length_str1;
    }


    int length_str2 = 0;
    for(int i = 0, j = length_str1; str2[i] != '\0'; ++i, ++j){
        str_merged[j] = str2[i];
        ++length_str2;
    }

    str_merged[length_str1+length_str2] = '\0';

    puts(str_merged);



    return 0;
}
