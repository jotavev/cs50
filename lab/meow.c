#include <stdio.h>
#include <cs50.h>

void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    int value = get_int("times: ");
    for (int i = 0; i < value; i++)
    {
        meow();
    }
}
