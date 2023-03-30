#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare
 * @s1: parameter to compare
 * @s2: parameter to compare
 * Return: the diff between the two characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);

}
