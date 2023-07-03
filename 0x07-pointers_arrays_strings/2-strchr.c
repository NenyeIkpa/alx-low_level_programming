#include <stddef.h>

/**
 * _strchr - locates character in string
 *
 * @s: given string
 * @c: character to be located
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
	}
	return (NULL);
}
