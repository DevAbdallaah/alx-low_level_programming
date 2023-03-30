#include "main.h"
/**
 * *_strcat - function to append
 * @dest: is a parameter
 * @src: is a parameter
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0, i;
	int srclen = 0;

	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i < srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
