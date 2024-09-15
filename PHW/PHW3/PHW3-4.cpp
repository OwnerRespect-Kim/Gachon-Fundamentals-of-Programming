#include <stdio.h>

int main(void)
{
    char words[101];
    char conversation[6][101] = { {0}, {0}, {0}, {0}, {0}, {0} };
    int c = 0, i, j;

    for (i = 0; i < 6; i++)
    {
        printf("Enter the %d-th conversation: ", i);
        for (j = 0; j < 99; j++)
        {
            c = getchar();
            if (c == EOF || c == '\n')
            {
                break;
            }
            words[j] = c;
        }
        words[j] = '\0';
        if (j > 0 && words[j - 1] == '?')
        {
            for (int k = 0; k < j; k++)
            {
                conversation[i][k] = words[k];
            }
            conversation[i][j] = '\0';
        }
    }

    printf("The strings ending with ""?"" are:\n");

    for (i = 0; i < 6; i++)
    {
        if (conversation[i][0] != '\0')
        {
            printf("%s\n", conversation[i]);
        }
    }

    return 0;
}
