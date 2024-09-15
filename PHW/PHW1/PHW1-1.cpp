#include <stdio.h>

int main(void)
{
	float u, a, t;
	float v, s;
	
	printf("Enter the inital_velocity(u) and acceleration(a) elapsed_time(t) : ");
	scanf("%f %f %f", &u, &a, &t);
	
	v = u + a * t;
	s = (u * t) + 0.5 * a * t * t;

	printf("Final_velocity(v) : %.1f\n", v);
	printf("Distance traversed(s) : % .1f", s);

	return 0;
}