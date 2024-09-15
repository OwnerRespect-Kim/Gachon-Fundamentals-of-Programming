#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i <= 9 / 2; i++)
    {
        for (j = i; j < 9 / 2; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
        }

    for (i = 9 / 2 + 1; i < 9; i++)
    {
        for (j = 0; j < i - 9 / 2; j++)
        {
            printf(" ");
        }
        for (k = 0; k < (9 - i) * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
        }

    return 0;
}
