#include "main.h"
/**
 * print_triangle - function of triangle
 * @size: is paramter
 * Return: 0 always
 */

void print_triangle(int size)
{
int i, j;
for (i = size; i >= 1; i--)
{
for (j = 1; j <= size; j++)
{
if (j == i || i < j)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}
