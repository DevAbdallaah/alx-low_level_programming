#include "main.h"
/**
 * _strncat - function to concatenate with number
 * @dest: is the destination
 * @src: cat to the dest
 * @n: byte for src
 * Return: the final destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i, j;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[destlen + j] = src[i];
	return (dest);
}
