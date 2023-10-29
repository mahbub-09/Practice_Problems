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
    printf("String: ");
    gets(str);

    char ch;
    printf("Character to be Searched: ");
    scanf("%c", &ch);

    int flag = 0;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] == ch){
            ++flag;
            break;
        }
    }

    if(flag)
        printf("Found\n");

    else
        printf("Not Found\n");




    return 0;
}
