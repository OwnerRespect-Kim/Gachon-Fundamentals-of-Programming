#include <stdio.h>

int main(void)
{
	int kor, mat, eng; // 3 subjects
	int Scholarship = 0;
	double average;
	char grade;
	printf("input 3 subject score : ");
	scanf("%d %d %d", &kor, &mat, &eng);

	average = (kor + mat + eng) / 3.0;

	if (average >= 90)
	{
		grade = 'A';
		Scholarship = 700000;
	}
	else if (average >= 80)
	{
		grade = 'B';
		Scholarship = 300000;
	}
	else if (average >= 70)
	{
		grade = 'C';
		Scholarship = 100000;
	}
	else if (average >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	printf("Average Score : %.2lf / Grade : %c / Scholarship : %d", average, grade, Scholarship);

	return 0;
}