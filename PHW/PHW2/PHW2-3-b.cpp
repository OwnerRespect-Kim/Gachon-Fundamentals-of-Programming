#include <stdio.h>

int main(void)
{
	int num, sum = 1;
	double  e = 1;

	printf("input a number for calculate the e : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum *= i;
		e += 1.0 / sum;
	}

	printf("Approximate value of e when added up to %d terms : %lf", num, e);
	// Approximately, when there are more than nine terms, output of e 2.718282

	return 0;
}