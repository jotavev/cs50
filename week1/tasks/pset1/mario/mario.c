#include <stdio.h>
#include <cs50.h>

int hashPrint(times)
{
    for (int i = 0; i < times; i++)
    {
        printf("#");
    }
    return times;
}

int whiteSpacePrint(times)
{
    for (int i = 0; i < times; i++)
    {
        printf(" ");
    }
    return times;
}

int get_valid_number(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

int main(void)
{
    int height = get_valid_number();
    int hashLenght = 1;
    int whiteSpaceLenght = height;
    for (int i = 0; i < height; i++)
    {
        whiteSpaceLenght--;
        whiteSpacePrint(whiteSpaceLenght);
        hashPrint(hashLenght);
        hashLenght++;
        printf("\n");
    }    
}
