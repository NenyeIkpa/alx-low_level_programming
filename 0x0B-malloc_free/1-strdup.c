#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a string copy
 *
 * @str: given string
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	int i;
	char *str_copy;

	if (str == NULL)
		return (NULL);
	str_copy = malloc(strlen(str) * sizeof(char) + sizeof(char));
	if (str_copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		str_copy[i] = str[i];
	str_copy[i] = '\0';
	return (str_copy);
}
