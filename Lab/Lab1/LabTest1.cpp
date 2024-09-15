#include <stdio.h>

int main(void)
{
	double r, a, c;
	printf("input radius : ");
	scanf("%lf", &r);

	a = 3.14 * r * r;
	c = 2 * 3.14 * r;

	printf("circe's area : %.2lf, circumference : %.2lf", a, c);

	return 0;
}