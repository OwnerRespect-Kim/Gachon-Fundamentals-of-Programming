#include <stdio.h>

int main(void)
{
	char s[100];
	int alternate = 0;
	int c = 0, i = 0;
	
	printf("Enter a line of text: ");

	for (i = 0; c != '\n'; i++)
	{
		c = getchar();
		s[i] = c;
	}
	s[i] = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (alternate == 0)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
				alternate = 1;
			}
			else
			{
				if (s[i] >= 'A' && s[i] <= 'Z')
				{
					s[i] += 32;
				}
				alternate = 0;
			}
		}
	}

	printf("Converted text is: %s", s);
}