#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create array
 * @size: parameter for size
 * @c: parameter ot store character
 * Return: NULL when size is 0 or pointer is NULL, or pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
		return (ptr);

}
