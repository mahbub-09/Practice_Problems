#include <stdbool.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char str[500];
    gets(str);

    for(int i = 0; i < strlen(str); ++i){
        printf("%d ", str[i]);
    }




    return 0;
}
