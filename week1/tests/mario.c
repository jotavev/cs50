#include <stdio.h>

void repeat(int times, char *letter, char *end)
{
    for (int i = 0; i < times; i++)
    {
        printf("%s", letter);
    }
    char *boool = "y";
    if (end == boool)
    {
        printf("\n");
    }
} 
    
int main(void)
{
    repeat(20, "#", "y");


    repeat(12, " ", "n");
    repeat(3, "#", "n");
    repeat(5, " ", "y");

    repeat(12, " ", "n");
    repeat(3, "#", "n");
    repeat(5, " ", "y");


    repeat(9, "#", "n");
    repeat(11, " ", "y");

    repeat(9, "#", "n");
    repeat(11, " ", "y");


    repeat(12, " ", "n");
    repeat(3, "#", "n");
    repeat(5, " ", "y");

    repeat(12, " ", "n");
    repeat(3, "#", "n");
    repeat(5, " ", "y");

    repeat(20, "#", "y");
}
