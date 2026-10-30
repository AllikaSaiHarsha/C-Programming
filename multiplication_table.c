#include <stdio.h>

int main(void)
{
    const int number = 7;

    printf("Multiplication table for %d:\n", number);
    for (int multiplier = 1; multiplier <= 10; multiplier++)
    {
        printf("%d x %d = %d\n", number, multiplier, number * multiplier);
    }

    return 0;
}
