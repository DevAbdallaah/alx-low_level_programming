#include "main.h"
/**
 * _puts - function to  put character
 * @str: is the parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
