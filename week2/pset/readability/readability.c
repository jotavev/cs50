#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int letterCounter(char arr[])
{
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (isalpha(arr[i]))
        {
            counter++;
        }
    }
    //printf("\n%i letters\n", counter);
    return counter;
}

int sentenceCounter(char arr[])
{
    int counter = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 33 || arr[i] == 46 || arr[i] == 63)
        {
            counter++;
        }
    }
    //printf("\n%i sentences\n", counter);
    return counter;
}

int wordCounter(char arr[])
{
    int counter = 1;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ' && arr[i] + 1 != ' ')
        {
            counter++;
        }
    }
    //printf("\n%i words\n", counter);
    return counter;
}

float letterAverage(float letter, float word)
{
    float result = (letter / word) * 100;
    return result;
}

float sentenceAverage(float sentence, float word)
{
    float result = (sentence / word) * 100;
    return result;
}

float ind(float L, float S)
{
    float result = 0.0588 * L - 0.296 * S - 15.8;
    return result;
}

int main(void)
{
    char *text = get_string("Text: ");
    
    int letter = letterCounter(text);
    int word = wordCounter(text);
    int sentence = sentenceCounter(text);

    float LA = letterAverage(letter, word);
    float SA = sentenceAverage(sentence, word);

    double res = ind(LA, SA);

    int result = (int)(round(res) * 10 / 10);


    if (result <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if(result >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", result);
    }


    //float res = ind(letterAverage(letter, word), sentenceAverage(sentence, word));

    //printf("%f\n", res);
}
