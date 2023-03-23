#include "main.h"

/**
 * times_table - funtion to print
 *
 * Return : void
 *
 */

void print_times_table(int n)
{
int r, i, j;
if (n > 15 || n < 0)
_putchar(' ');
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
r = i * j;
if (j == n)
{
if (r < 100 && r >= 10)
{
_putchar(' ');
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
else if (r < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(r + '0');
}
else
{
int a, b;
a = r % 10;
b = r / 10;
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar(a + '0');
}
}
else
{
if (r < 100 && r >= 10)
{
_putchar(' ');
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
else if (r < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(r + '0');
}

else
{
int a, b;
a = r % 10;
b = r / 10;
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar(a + '0');
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
