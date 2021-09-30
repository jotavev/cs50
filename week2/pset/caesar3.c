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
            bool result = true;
        }
        else
        {
            bool result = false;
        }
        printf("%i", result);
    }
    return result;
}

int main(int argc, string argv[])
{

    if (argc == 2)
    {
        isDigits(argv[1]);
        printf("Sucess\n");
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
    } 
    else
    {
        printf("Usage: ./caesar key");
    }
}
