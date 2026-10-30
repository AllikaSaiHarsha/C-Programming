#include <stdio.h>
#include <string.h>

static int is_palindrome(const char *text)
{
    const size_t length = strlen(text);

    for (size_t i = 0; i < length / 2; i++)
    {
        if (text[i] != text[length - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    const char *words[] = {"level", "hello", "radar", "c"};
    const size_t count = sizeof(words) / sizeof(words[0]);

    for (size_t i = 0; i < count; i++)
    {
        printf("%s: %s\n", words[i],
               is_palindrome(words[i]) ? "palindrome" : "not a palindrome");
    }

    return 0;
}
