#include <stdio.h>

int num_words(char in[100]);
int num_non_alphabets(char in[100]);

int main(void)
{
    char in_string[100];
    int words_cnt;        // number of words
    int non_alpha_cnt;    // number of non-alphabets

    // read input
    printf("Type a string: ");
    scanf("%[^\n]s", in_string);

    // function call
    words_cnt = num_words(in_string);
    non_alpha_cnt = num_non_alphabets(in_string);

    // result
    printf("Number of words = %d\n", words_cnt);
    printf("Number of non-alphabets = %d\n", non_alpha_cnt);

    return 0;
}

int num_words(char in[100])
{
    int count = 0;
    int is_word = 0;

    for (int i = 0; in[i] != '\0'; i++)
    {
        if ((in[i] >= 'A' && in[i] <= 'Z') || (in[i] >= 'a' && in[i] <= 'z'))
        {
            if (!is_word)
            {
                count++;
                is_word = 1;
            }
        }
        else
        {
            is_word = 0;
        }
    }

    return count;
}

int num_non_alphabets(char in[100])
{
    int count = 0;

    for (int i = 0; in[i] != '\0'; i++)
    {
        if (!((in[i] >= 'A' && in[i] <= 'Z') || (in[i] >= 'a' && in[i] <= 'z')))
        {
            count++;
        }
    }

    return count;
}
