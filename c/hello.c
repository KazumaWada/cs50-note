#include <cs50.h>
#include <stdio.h>//standard input output

int main(void)
{
    string answer = get_string("whats your name? ");
    printf("Hello, %s\n", answer);// \n: put a new line here bc without this, you have to hit the space bottom everytime to do next move. 
    %s: strings
}