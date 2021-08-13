#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");

    int y = get_int("y: ");

    float result = (float) x / (float) y;

    printf("the divisão is %f\n", result);
}
