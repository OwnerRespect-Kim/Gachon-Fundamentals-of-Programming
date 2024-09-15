#include <stdio.h>

int main(void)
{
	float kilograms, height, meter;
	float bmi;
	
	printf("Enter your weight and height : ");
	scanf("%f %f", &kilograms, &height);
	meter = height / 100;
	bmi = kilograms / (meter * meter);

	printf("bmi is %.1f\n", bmi);
	if (bmi < 18.5)
	{
		printf("Underweight");
	}
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		printf("Normal");
	}
	else if (bmi >= 25 && bmi <= 29.9)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obese");
	}

	return 0;
}