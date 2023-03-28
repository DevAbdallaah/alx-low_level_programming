#include "main.h"

/**
 * puts2 - function to print
 * @str: is the parameter
 * Return: 0 always
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
