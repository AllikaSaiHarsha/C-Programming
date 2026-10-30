#include <stdio.h>

static int is_prime(int number)
{
    if (number < 2)
    {
        return 0;
    }

    for (int divisor = 2; divisor <= number / divisor; divisor++)
    {
        if (number % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    printf("Prime numbers from 1 to 50:");
    for (int number = 1; number <= 50; number++)
    {
        if (is_prime(number))
        {
            printf(" %d", number);
        }
    }
    printf("\n");

    return 0;
}
