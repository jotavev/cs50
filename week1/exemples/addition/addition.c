#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");

    int y = get_int("y: ");
    
    int result = x + y;

    printf("the sum is: %i\n", result);
}
