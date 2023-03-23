#include "main.h"

/**
 * times_table - funtion to print
 *
 * Return : void
 *
 */

void times_table(void)
{
int i;
int j;
int r;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
r = i * j;
if (r < 10)
{
if (j == 9)
{
_putchar(' ');	
_putchar(r % 10 + '0');
}
else
{
_putchar(' ');
_putchar(r % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
if (j == 9)
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
else
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
