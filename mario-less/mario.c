#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, j, t = 1;
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while (n <= 0 || n >= 9);

    for (int i = 0; i < n; i++)
    {

        for (j = t; j < n; j++)
        {
            printf(" ");
        }

        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
        t++;
    }
}
