#include <stdlib.h>
/**
 * _strdup - function to duplicate
 * @str: parameter
 * Return: copied str
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *copy;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	copy = malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';
	return (copy);
}
