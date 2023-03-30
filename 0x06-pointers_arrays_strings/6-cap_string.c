#include "main.h"
/**
 * cap_string - function to capitalize
 * @n: is the parameter
 * Return: string
 */

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		if (n[i] == ' ' || n[i] == '.' || n[i] == '\n' || n[i] == '\t')
			n[i + 1] = n[i + 1] - 32;
	}
	return (n);
}
