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
    //float recebido = get_valid_number();
    //float troco = recebido;
    //int coins = 0;
    //printf("%f", recebido);

    float recebido = get_valid_number();

    int converted = conversor(recebido);

    do
    {
        //verificar se da de fazer com as moedas????
        //se der pra coisar a moeda
            //moedas++
            //recebido - o resultado anterior
        //else
            //troca pra proxima moeda


    }
    while (recebido != 0);
}

// coins
// .25
// .10
// .5
// .1
