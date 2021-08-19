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

int linePrint(number)
{
    int whiteSpaceLenght = 8;
    whiteSpaceLenght = whiteSpaceLenght - number;
    whiteSpacePrint(whiteSpaceLenght);
    hashPrint(number);
    return number;
}

int main(void)
{
    linePrint(1);
    printf("\n");
    linePrint(2);
    printf("\n");
    linePrint(5);
    printf("\n");
}
