#include <cs50.h>
#include <stdio.h>

//why int keep return int??
// code always end \0 if nothung error occur. 
int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

// if you type 'echo $?', you can see it error or not

// ~/arrays/ $ ./exit
// missing command-line argument
// ~/arrays/ $ echo $?
// 1
// ~/arrays/ $ ./exit kaz
// hello, kaz
// ~/arrays/ $ echo $?
// 0