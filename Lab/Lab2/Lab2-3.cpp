#include <stdio.h>

int main(void)
{
	int num, octal;
	int octalnum[100];
	int i, j;

	printf("Input the decimal number: ");
	scanf("%d", &num);

	octal = num;

	for (i = 1; octal > 0; i++)
	{
		octalnum[i] = octal % 8;
		octal /= 8;
	}

	printf("Octal number is: 0");

	for (j = i - 1; j > 0; j--)
	{
		printf("%d", octalnum[j]);
	}

	return 0;
}