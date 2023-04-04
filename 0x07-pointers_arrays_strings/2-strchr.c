#include <stdio.h>
/**
 * _strchr - function that locate a char string
 * @s: character string
 * @c: character to be located
 * Return: character and subsequent character
 * or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}

	return (NULL);
}
