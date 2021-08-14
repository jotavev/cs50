#include <stdio.h>
#include <cs50.h>

int hashp(times)
{
    for (int i = 0; i < times; i++)
    {
        printf("#");
    }
}

int main(void)
{
    int value = get_int("Height: ");
    for(int i = 0; i < value; i++)
    {
        hashp(3);
        printf("\n");
    }    
}
