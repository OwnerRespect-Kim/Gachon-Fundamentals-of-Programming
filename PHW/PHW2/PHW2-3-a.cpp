#include <stdio.h>

int main(void)
{
	int nonnegative_num, sum = 1;
	printf("input a nonnegative_num : ");
	scanf("%d", &nonnegative_num);

	if (nonnegative_num != 0)
	{
		for (int i = nonnegative_num; i > 0; i--)
		{
			sum *= i;
		}
	}

	printf("output : %d", sum);

	return 0;
}