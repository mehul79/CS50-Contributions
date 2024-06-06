#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;

    for (;;)
    {
        printf("Start size:  ");
        scanf("%d", &start_size);
        if (start_size < 9)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    // TODO: Prompt for end size
    int end_size;

    for (;;)
    {
        printf("End size: ");
        scanf("%d", &end_size);
        if (end_size < start_size)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    // TODO: Calculate number of years until we reach threshold
    int count = 0;
    while (start_size < end_size)
    {
        start_size = start_size + start_size / 3 - start_size / 4;
        count = count + 1;
    }

    // TODO: Print number of years
    printf("Years: %d", count);
}
