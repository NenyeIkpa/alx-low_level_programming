#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: given string;
 * @accept: substring to search for
 *
 * Return: char *
 */

/*
 char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int a_length = strlen(accept);

	if (s == NULL || accept == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j != a_length; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	if (s == NULL || accept == NULL)
		return (NULL);

	for (; *s != '\0'; ++s)
	{
		for (a = accept; *a != '\0'; ++a)
		{
			if (*s == *a)
				return (s);
		}
	}
	return (NULL);
}
