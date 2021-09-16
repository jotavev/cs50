#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Input: ");
    printf("Output: \n");
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }
    printf("\n");
}
