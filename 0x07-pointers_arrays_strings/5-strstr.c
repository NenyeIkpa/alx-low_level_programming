#include <stddef.h>
#include <string.h>

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
	int i = 0, j, isFound, needle_length, idx, count = 0;

	needle_length = strlen(needle);
	while (i < needle_length - 1)
	{
		isFound = 0;
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(haystack + j) == *needle || count == 0)
				idx = j;
			if (*(haystack + j) == *(needle + i))
			{
				isFound = 1;
				break;
			}
		}
		if (isFound == 1)
		{
			i++;
			count++;
		}
		if ( isFound == 0 && count > 0)
			count--;
	}
	if (count == needle_length - 1)
		return (haystack + idx);
	else
		return (NULL);
}

/*
 * char *_strstr(char *haystack, char *needle)
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
*/
