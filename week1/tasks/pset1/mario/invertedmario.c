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

int main(void)
{
    int value = get_int("Height: ");
    int times = 0;
    for (int i = 0; i < value; i++)
    {
        if (times < value)
        {
            times++;
        }
        hashp(times);
        printf("\n");
    }    
}
