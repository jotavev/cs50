#include <stdio.h>
#include <cs50.h>
#include <string.h>

int isDigits(char arr[])
{
    bool result;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    return result;
}

int strToInt(char arr[])
{
    int lenght = strlen(arr);
    if (lenght == 2)
    {
        int decimal = (arr[0] - 48) * 10;
        int numeral = arr[1] - 48;
        int result = decimal + numeral;
        printf("%i", result);
    }
    else if (lenght == 1)
    {
        int numeral = arr[0] - 48;
        int result = numeral;
        printf("%i", result);
    }

    return 0;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("Sucess\n");

    int pp = isDigits(argv[1]);

    int lenght = strlen(argv[1]);
    if (lenght == 2)
    {
        int decimal = (argv[1][0] - 48) * 10;
        int numeral = argv[1][1] - 48;
        int result = decimal + numeral;
        printf("%i", result);
    }
    else if (lenght == 1)
    {
        int numeral = argv[1][0] - 48;
        int result = numeral;
        printf("%i", result);
    }

    printf("\n\n\n%i", pp);
}
