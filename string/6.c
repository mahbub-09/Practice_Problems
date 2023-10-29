#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char str_main[500], str_cpy[500];
    printf("String1: ");
    gets(str_main);

    int length = 0;
    for(int i = 0; str_main[i] != '\0'; ++i){
        str_cpy[i] = str_main[i];
        ++length;
    }

    str_cpy[length] = '\0';

    printf("String2: ");
    puts(str_cpy);




    return 0;
}
