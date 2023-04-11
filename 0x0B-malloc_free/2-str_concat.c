#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 *
 * Return: pointer to the concatenated string, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, s1_len, s2_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;
	concat = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	for (j = 0; j < s2_len; j++)
		concat[s1_len + j] = s2[j];
	concat[s1_len + s2_len] = '\0';
	return (concat);
}
