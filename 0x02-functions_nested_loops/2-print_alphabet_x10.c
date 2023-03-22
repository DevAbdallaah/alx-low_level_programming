#include "main.h"

/**
 *print_alphabet_x10 -  function - print a to z
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
int f;
for (f = 0; f < 10; f++)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
