#include <stdio.h>
#include <cs50.h>

int strtoint(string arr[])
{
    int decimal = (arr[1][0] - 48) * 10;
    int numeral = arr[1][1] - 48;
    int result = decimal + numeral;
    return result;
}

int main(int argc, string argv[])
{
    int cipher = strtoint(argv);
    if (argc == 2)
    {
        printf("você passou 2 paremetros parabens\n");
    } 
    else
    {
        printf("não passou 2 parametros");
    }
    printf("%i", cipher);
}



    //if (cipher >= 0 && cipher < 27)
    //{
     //   printf("\nta no fafa beto");
    //}
