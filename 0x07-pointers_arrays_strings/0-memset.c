#include <stdio.h>
/**
 * _memset - function that fill the memory with constant byte
 * @s: is a parameter
 * @b: is a parameter
 * @n: is a parameter
 * Return: constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
