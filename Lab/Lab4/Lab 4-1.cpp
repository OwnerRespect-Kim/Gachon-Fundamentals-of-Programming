#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes of gen_dice_number and calc_prob
void gen_dice_number(int* dice, int num);
void calc_prob(int* dice, int* freq, double* prob, int num);

int main()
{
    int dice[100], freq[6] = { 0, };
    double prob[6] = { 0.0 };
    srand(time(NULL));
    // function call
    gen_dice_number(dice, 100);
    calc_prob(dice, freq, prob, 100);
    // print the probabilities
    printf("Probabilities of each dice number\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d: %.2lf (%d/%d)\n", i + 1, prob[i], freq[i], 100);
    }

    return 0;
}

void gen_dice_number(int* dice, int num)
{
    // randomly generates dice number
    for (int i = 0; i < num; i++)
    {
        dice[i] = (rand() % 6) + 1;
    }
}

void calc_prob(int* dice, int* freq, double* prob, int num)
{
    // calculates each probabilities:
    // number of occurrences of each number / 100
    for (int i = 0; i < num; i++)
    {
        freq[dice[i] - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        prob[i] = (double)freq[i] / num;
    }
}
