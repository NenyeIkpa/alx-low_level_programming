#include <stddef.h>
#include <string.h>

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
	int i, s_length;

	s_length = strlen(s);
	for (i = 0; i <= s_length; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
	}
	return (NULL);
}
