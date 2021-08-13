#include <stdio.h>
#include <cs50.h>

//a print "meow" function
void meow(void)
{
    printf("meow\n");
}

int main(void)
{
    //pick a number from user to make loop
    int value = get_int("times: ");
    for (int i = 0; i < value; i++)
    {
        meow();
    }
}
