#include <stdio.h>

int main(void)
{
	int num, nine;
	int count = 0;
	printf("input a number : ");
	scanf("%d", &num);

	for (int i = 0; num > 0; num = num / 10)
	{
		nine = num % 10;
		if (nine == 9)
		{
			count++;
		}
	}

	printf("counts of nine : %d", count);

	return 0;
}