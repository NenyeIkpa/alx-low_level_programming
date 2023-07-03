#include <stddef.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: given string
 * @needle: substring to be located
 *
 * Return: char *
 */

char *_strstr(char *haystack, char *needle)
{
	int isFound;
	char *a;
	char *b;

	for (b = needle ; *b; b++)
	{
		isFound = 0;
		for (a = haystack; *a; a++)
		{
			if (*a == *b)
			{
				isFound = 1;
				break;
			}
		}
		if (isFound == 0)
		{
			break;
			return (NULL);
		}
	}
	return (needle);
}
