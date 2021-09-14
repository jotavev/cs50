#import <stdio.h>
#import <cs50.h>

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

int conversor(float number)
{
    int conversor = number * 100;
    int result = conversor % 100;
    return result;
}

int main(void)
{
    float recebido = get_valid_number();

    int convertedNumber = conversor(recebido);

    int coin = 0;

    do
    {
        if (convertedNumber >= 25)
        {
            while (convertedNumber >= 25)
            {
                convertedNumber = convertedNumber - 25;
                coin++;
            }
        }

        else if (convertedNumber >= 10)
        {
            while (convertedNumber >= 10)
            {
                convertedNumber = convertedNumber - 10;
                coin++;
            }
        }

        else if (convertedNumber >= 5)
        {
            while (convertedNumber >= 5)
            {
                convertedNumber = convertedNumber - 5;
                coin++;
            }
        }

        else if (convertedNumber >= 1)
        {
            while (convertedNumber >= 1)
            {
                convertedNumber = convertedNumber - 1;
                coin++;
            }
        }
    }
    while (convertedNumber != 0);

    printf("%i", coin);
}

// coins
// .25
// .10
// .5
// .1
