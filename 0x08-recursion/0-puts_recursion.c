#include "main.h"
/**
 * _puts_recursion - recursive func to return string
 * @s: string parameter
 * Retunr: 0 always
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
