#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int Let = 0, Wor = 0, Sen = 0;
    string text = get_string("Text: ");
    // LETTERS
    int i = 0;
    for (int j = 0; j < strlen(text); j++, i++)
    {
        if (text[i] == ' ')
        {
            continue;
        }
        else if (text[i] == '?' | text[i] == ',' | text[i] == '.' | text[i] == '!' | text[i] == 39)
        {
            continue;
        }
        else
        {
            Let++;
        }
    }

    // WORDS
    i = 0;
    for (int m = 0; m < strlen(text); m++, i++)
    {
        if (text[i] == ' ')
        {
            Wor++;
        }
        else
        {
            continue;
        }
    }
    Wor = Wor + 1;

    // SENTENCES
    i = 0;
    for (int n = 0; n < strlen(text); n++, i++)
    {
        if (text[i] == '?' | text[i] == '.' | text[i] == '!')
        {
            Sen = Sen + 1;
        }
        else
        {
            continue;
        }
    }

    float L = (float) Let / (float) Wor * 100;
    float S = (float) Sen / (float) Wor * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n", (int) round(index));
    }
}
