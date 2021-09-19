#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int lenght = 0;
    string name = get_string("Input: ");
    printf("Lenght: ");
    for (int i = 0; i < strlen(name); i++)
    {
        lenght += 1;
    }
    printf("%i\n", lenght);
}
