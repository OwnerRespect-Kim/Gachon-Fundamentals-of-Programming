#include <stdio.h>

int main(void)
{
	int first_set[10] = { 0, };
	int second_set[10] = { 0, };
	int union_set[20] = { 0, };
	int i, j, k = 0;
	int repeted_num;

	printf("Enter first set: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &first_set[i]);
		union_set[k] = first_set[i];
		k++;
	}

	printf("Enter second set: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &second_set[i]);
		repeted_num = 0;
		for (j = 0; j < k; j++)
		{
			if (union_set[j] == second_set[i])
			{
				repeted_num = 1;
				break;
			}
		}
		if (repeted_num != 1)
		{
			union_set[k] = second_set[i];
			k++;
		}
	}

	printf("The Union set: ");
	for (i = 0; i < k; i++)
	{
		printf("%d ", union_set[i]);
	}

	return 0;
}
