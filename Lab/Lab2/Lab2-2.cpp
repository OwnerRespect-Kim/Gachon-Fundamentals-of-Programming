#include <stdio.h>

int main(void)
{
	int num;
	printf("Input the number of row: ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			printf("%d ", i + 1);
		}
		printf("\n");
	}
}