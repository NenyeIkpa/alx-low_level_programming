#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: given string;
 * @ccept: substring to search for
 *
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int a_length = strlen(accept);
	char *ptr;

	for (i = 0; i < a_length; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i] && s[j + 1] == accept[i + 1] &&s[j + 2] == accept[i + 2])
				ptr = &(s[j]);
		}
	}
	ptr = strpbrk(s, accept);
	return (ptr);
}
