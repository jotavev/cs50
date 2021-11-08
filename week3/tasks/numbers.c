#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int times;
    int breac = 7;
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};


    for (int i = 0; i < breac; i++)
    {
        times++;
        if (numbers[i] == 0)
        {
            breac = i;
            printf("found\n");
        }
    } 
    printf("dont found\n");
    printf("running time is %i\n", times);
}
