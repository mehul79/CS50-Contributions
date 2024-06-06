#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
char cap = 'A';
int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // printf("%s\n", word1);
    // printf("%s\n", word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins !\n");
        printf("score1 = %d and score2 = %d\n", score1, score2);
    }
    else if (score1 == score2)
    {
        printf("Tie!\n");
        printf("score1 = %d and score2 = %d\n", score1, score2);
    }
    else
    {
        printf("Player 2 wins !\n");
        printf("score1 = %d and score2 = %d\n", score1, score2);
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - 32;
        }
    }
    int score = 0;
    for (int j = 0; j < strlen(word); j++)
    {
        if (word[j] >= 'A' && word[j] <= 'Z')
        {
            score = score + POINTS[word[j] - 'A'];
        }
        else
        {
            continue;
        }
    }
    return score;
}
