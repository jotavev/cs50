#include <stdio.h>

int main(void)
{
    int text[3];

    text[0] = 'H';
    text[1] = 'I';
    text[2] = '!';

    for(int i = 0; i < 3; i++)
    {
        printf("%c\n", text[i] + 1);
    }

}
