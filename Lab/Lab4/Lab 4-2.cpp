#include <stdio.h>
// prototypes of str_len, str_concat
int str_len(char* in);
void str_concat(char* in1, char* in2, char* out);

void main()
{
	char string1[100], string2[100], string_out[200];
	int len1, len2;
	// read two strings
	printf("Enter two strings in order.\n");
	gets_s(string1);
	gets_s(string2);
	// function call
	len1 = str_len(string1);
	len2 = str_len(string2);
	str_concat(string1, string2, string_out);
	// print the results
	printf("(Results)\n");
	printf("Length: %d %d\n", len1, len2);
	printf("Concatenation: %s\n", string_out);
}
int str_len(char* in)
{
	int count = 0;
	for (int i = 0; in[i] != NULL; i++)
	{
		count++;
	}

	return count;
	// count the length of the string and return it
}

void str_concat(char* in1, char* in2, char* out)
{
	// concatenate two strings, in1 and in2 into out
	// while reversely adding the second one, in2
	int len1 = str_len(in1);
	int len2 = str_len(in2);

	while (*in1 != '\0')
	{
		*out = *in1;
		in1++;
		out++;
	}

	while (len2 > 0)
	{
		in2 += len2 - 1;
		*out = *in2;
		in2--;
		out++;
		len2--;
	}
	*out = '\0';
}