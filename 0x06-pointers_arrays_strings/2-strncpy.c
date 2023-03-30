#include "main.h"
/**
 * _strncpy - funtion to copy
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of charceters to be copied
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
