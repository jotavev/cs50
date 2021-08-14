#include <stdio.h>
#include <cs50.h>

int hashp(times)
{
    for (int i = 0; i < times; i++)
    {
        printf("#");
    }
    return times;
}
int whitespace(times)
{
    for (int i = 0; i < times; i++)
    {
        printf(" ");
    }
    return times;
}

int main(void)
{
    int total = get_int("Height: ");
    int times = 1;
    int height = total;
    for (int i = 0; i < height; i++)
    {
        total--;
        whitespace(total);
        hashp(times);
        times++;
        printf("\n");
    }    
}
