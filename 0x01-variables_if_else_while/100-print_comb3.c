#include <stdio.h>

int main(void)
{
    int first, second;

    for (first = 0; first < 10; first++)
    {
        for (second = 0; second < 10; second++)
        {
            putchar(first + '0');
            putchar(second + '0');
            if (first && second)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
