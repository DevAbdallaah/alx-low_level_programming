#include "main.h"
/**
 * print_diagonal - function print line
 * @n: is paramter
 * Return: 0 always
 */

void print_diagonal(int n)
{
int i,j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i <= n; i++)
{
_putchar('\n');
for (j = 0; j <= n; i++)
{	
_putchar('\t');
}
_putchar('\\');
}
}
_putchar('\n');

}
