#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree the terms of contract? \n(type y to YES or n to NO)  ");

    if (c == 'y' || c == 'Y')
    {
        printf("ok, you sell your soul to demon");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You dont agree");
    }
}
