#include <stdio.h>
#include <string.h>
/**
 * rev_string - function to reverse string
 * @s: is the parameter
 * Return: 0 always
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
