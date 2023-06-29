#include <string.h>

/**
 * _strcmp - compares two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			result = 0;
		else
		{
			if (s1[i] < s2[i])
				result = -15;
			else
				result = 15;
			break;
		}
	}
	return (result);
}
