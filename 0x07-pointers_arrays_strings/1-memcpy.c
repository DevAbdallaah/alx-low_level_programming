#include <stdio.h>
/**
 * _memcpy - function to copy memory area
 * @dest: is a parameter
 * @src: is a paramter
 * @n: is a parameter
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
