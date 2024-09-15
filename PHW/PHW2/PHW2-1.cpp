#include <stdio.h>

int main(void)
{
    int num, prime_num= 1;
    printf("Input a number: ");
    scanf("%d", &num);
    
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            prime_num = 0;
            break;
        }
    }
    if (prime_num == 1 && num != 1)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }
    
    return 0;
}
