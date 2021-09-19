#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
	if (argc == 2) // se o número de argumentos para o programa for 2
	{
	       for (int i = 0, n = strlen(argv[1]); i < n; i ++)
		{
		printf("%i\n", argv[1][i] + 1);
		}
	}
	else
	{
		printf("Hello, World!\n");
	}
}
