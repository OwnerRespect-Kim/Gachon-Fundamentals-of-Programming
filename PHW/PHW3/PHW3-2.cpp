#include <stdio.h>

int main(void)
{
    int first_set[10] = { 0, };
    int second_set[10] = { 0, };
    int Intersection_set[10] = { 0, };
    int i, j, k = 0;
    int repeated_num;

    printf("Enter first set: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &first_set[i]);
    }

    printf("Enter second set: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &second_set[i]);
    }

    for (i = 0; i < 10; i++)
    {
        repeated_num = 0;
        for (j = 0; j < 10; j++)
        {
            if (first_set[i] == second_set[j])
            {
                repeated_num = 1;
                break;
            }
        }
        if (repeated_num == 1)
        {
            Intersection_set[k] = first_set[i];
            k++;
        }
    }

    printf("The Intersection set: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", Intersection_set[i]);
    }

    return 0;
}
