#include <stdio.h>

int main(void)
{
	int five_digit_num;
	printf("Enter a five-digit number : ");
	scanf("%d", &five_digit_num);
	
	printf("%d   ", five_digit_num / 10000); // Since only the quotient is output, the fifth digit is output.
	five_digit_num = five_digit_num % 10000; // Four digits will be allocated
	
	printf("%d   ", five_digit_num / 1000); // Since only the quotient is output, the fourth digit is output.
	five_digit_num = five_digit_num % 1000; // Three digits will be allocated
	
	printf("%d   ", five_digit_num / 100); // Since only the quotient is output, the third digit is output.
	five_digit_num = five_digit_num % 100; // Two digits will be allocated
	
	printf("%d   ", five_digit_num / 10); // Since only the quotient is output, the second digit is output.
	printf("%d", five_digit_num % 10); // Since the two digits are divided by 10 and only the remainder is output, the first digit is output.

	return 0;
}