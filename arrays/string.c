#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for(int i = 0; s[i] != '\0'; i++) //s[i] != '\0' means strlen(i) ← this is build-in method 
    {
        printf("%c", s[i]);
    }
    printf("\n");
}