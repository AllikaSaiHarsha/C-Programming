#include <stdio.h>

int main(void)
{
    const int numbers[] = {12, 7, 25, 3, 18};
    const size_t count = sizeof(numbers) / sizeof(numbers[0]);
    int minimum = numbers[0];
    int maximum = numbers[0];
    int sum = 0;

    for (size_t i = 0; i < count; i++)
    {
        sum += numbers[i];
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (double)sum / count);

    return 0;
}
