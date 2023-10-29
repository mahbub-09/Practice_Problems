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
    printf("String: ");
    gets(str);

    bool palindrome = true;
    for(int i = 0; i < strlen(str)/2; ++i)
        if(str[i] != str[strlen(str)-i-1])
           palindrome = false;

    if(palindrome)
        printf("Palindrome\n");
    else
        printf("Not A Palindrome\n");




    return 0;
}
