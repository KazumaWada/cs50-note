#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //without ctype.h
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //      printf("%c", s[i] - 32);// %c: character
        // }
        // else
        // {
        //   printf("%c", s[i]); 
        // }
        
        //lets use ctype.h
        printf("%c", toupper(s[i]));
    }
printf("\n");
}