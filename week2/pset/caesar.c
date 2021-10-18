#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int isDigits(char arr[])
{
    int result;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    return result;
}

int arraySize(char arr[])
{
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        counter++;
    }
    return counter;
}

int strToInt(char arr[])
{
    int lenght = strlen(arr);
    int result = 0;
    if (lenght == 2)
    {
        int decimal = (arr[0] - 48) * 10;
        int numeral = arr[1] - 48;
        result = decimal + numeral;
    }
    else if (lenght == 1)
    {
        int numeral = arr[0] - 48;
        result = numeral;
    }
    return result;
}

int charShift(string str, int number)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == 32 || str[i] == 44 || str[i] == 33)
        {
            printf("%c", str[i]);
        }
        else
        {
            int res = str[i] + number;
            if (islower(str[i]))   
            {
                for (int j = 0; res >= 122; j++)
                {
                    res = res - 26;
                }  
                printf("%c", res);
            }
            else if (isupper(str[i]))
            {
                for (int j = 0; res >= 90; j++)
                {
                    res = res - 26;
                }  
                printf("%c", res);
            }

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

    int checkDigits = isDigits(argv[1]);
    int arrayLenght = arraySize(argv[1]);

    if (checkDigits != 1 || arrayLenght > 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int cipher = strToInt(argv[1]);

    string userText = get_string("plaintext: ");

    printf("ciphertext: ");
    charShift(userText, cipher);

    printf("\n\nthe array size is %i", arrayLenght);

    printf("\n\nthe cipher number is %i", cipher);

    printf("\n\n\ncheckdigits is %i", checkDigits);
}
