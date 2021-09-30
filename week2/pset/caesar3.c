#include <stdio.h>
#include <cs50.h>
#include <string.h>

int cat_number(int arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("!");
    }
return 0;
}

int main(int argc, string argv[])
{
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
    }

    if (argc == 2)
    {
        printf("você passou 2 paremetros parabens\n");
    } 
    else
    {
        printf("não passou 2 parametros");
    }
}
