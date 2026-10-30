#include <stdio.h>

int main(void)
{
    int previous = 0;
    int current = 1;

    printf("First 10 Fibonacci numbers:");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", previous);
        int next = previous + current;
        previous = current;
        current = next;
    }
    printf("\n");

    return 0;
}
