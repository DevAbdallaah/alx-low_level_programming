#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: is the string characters
 * @accept: is a parameter
 * Return: length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int match_count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match_count++;
				break;
			}
		}

			if (accept[j] == '\0')
				break;
	}

	return (match_count);
}
