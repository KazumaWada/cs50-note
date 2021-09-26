#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "charie", "Fred", "Geroge", "Ginny", "Perciy", "Ron"};
    
    for (int i = 0; i < 7; i++)
    {
        // in C, 0 is always right. not array numbers or sum 
        if(strcmp(names[i], "Fred") == 0 )
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
     return 1;
}