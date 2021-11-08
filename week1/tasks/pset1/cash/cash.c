#import <stdio.h>
#import <cs50.h>
#import <math.h>

float get_valid_number(void)
{
    float n;
    do
    {
        n = get_float("Change owed: ");
    }
    while (n < 0);
    return n;
}

int main(void)
{
    double b = get_valid_number();

    b = round(b * 100);

    int a = (int)b;

    int counter = 0;

    for (int i = 0; a != 0; i++)
    {
        for (int j = 0; a >= 25; j++)
        {
            a -= 25;
            counter++;
            printf("0.25\n");
        }
        for (int j = 0; a >= 10 && a < 25; j++)
        {
            a -= 10;
            counter++;
            printf("0.10\n");
        }
        for (int j = 0; a >= 5 && a < 10; j++)
        {
            a -= 5;
            counter++;
            printf("0.05\n");
        }
        for (int j = 0; a < 5 && a !=  0; j++)
        {
            a -= 1;
            counter++;
            printf("0.01\n");
        }
    }

    printf("%i\n", counter);
}
