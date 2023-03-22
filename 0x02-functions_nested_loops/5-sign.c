#include "main.h"
/**
 *  print_sign - function to print lower case
 *  @n: is the parameter
 *
 *  Return: 1 if n is greater than 0
 *          0 if n is 0
 *          -1 if n is less than zero
 *
 */
int print_sign(int n)
{
int r;
if (n > 0)
{
r = 1;
_putchar('+');
}
else if (n == 0)
{
r = 0;
_putchar('0');
}
else if (n < 0)
{
r = -1;
_putchar('-');
}
return (r);
}
