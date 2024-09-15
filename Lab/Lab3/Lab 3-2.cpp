#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int lotto_num[6];
	for (int i = 0; i < 6; i++)
	{
		lotto_num[i] = time(NULL);
		srand(lotto_num[i]);
	}
	
	// srand
	// num generation
	// result
	printf("Lotto Numbers: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%02d ", lotto_num[i] = (rand() % 46 + 1));
	}
	printf("\n");
}