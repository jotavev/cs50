#include <cs50.h>
#include "cs50.h"
#include <stdio.h>

int main(void)
    {
        string answer = get_string("qual seu nome? ");
        printf("então voce é o %s\n", answer);
    }
