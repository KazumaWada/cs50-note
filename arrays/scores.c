#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

int main(void)
{
    int score[TOTAL];//total number not index
    for(int i=0; i<TOTAL; i++)
    {
     scores[i] = get_int("score: ");   
    }
    
    printf("Average: %f\n", average(TOTAL, scores));//dataType:  int = ex, 3,4  float= ex, 3.4, 6.5
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i=0; i<length; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) length;
}