#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: given string 1
 * @s2: given string 2
 *
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s1_s2;

	if (s1 == NULL)
		s1[0] = "";
	if (s2 == NULL)
		s2[0] = "";
	s1_s2 = malloc(strlen(s1) * sizeof(char) +
			strlen(s2) * sizeof(char) + sizeof(char));
	if (s1_s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s1_s2[i] = s1[i];
	for (i = strlen(s1), j = 0; s2[j]; i++, j++)
		s1_s2[i] = s2[j];
	s1_s2[i] = '\0';
	return (s1_s2);
}
