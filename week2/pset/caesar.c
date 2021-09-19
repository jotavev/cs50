#include <stdio.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    int numeral = argv[1][1] - 48;
    int decimal = (argv[1][0] - 48) * 10;
    int cipher = numeral + decimal;
    if (argc == 2)
    {
        printf("você passou 2 paremetros parabens\n");
    } 
    else
    {
        printf("não passou 2 parametros");
    }
    printf("%i", decimal);
    printf("%i", numeral);
}



    //if (cipher >= 0 && cipher < 27)
    //{
     //   printf("\nta no fafa beto");
    //}
