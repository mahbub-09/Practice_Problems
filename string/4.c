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

    int length = 0;
    for(int i = 0; str[i] != '\0'; ++i)
        ++length;

    printf("%d\n", length);


    return 0;
}
