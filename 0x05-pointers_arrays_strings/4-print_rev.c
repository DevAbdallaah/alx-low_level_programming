#include "main.h"
#include <stdio.h>
/**
 * print_rev - function print string in reverse
 * @s: is a parameter
 * Return: 0 always
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = len; i >= 0 ; i--)
	{
		_putchar(s[i]);

	}
_putchar('\n');
}
