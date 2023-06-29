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
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);

	if (s1_length < s2_length)
		result = -15;
	else if (s1_length > s2_length)
		result = 15;
	else
	{
		for (i = 0; s1_length == s2_length && i < s1_length; i++)
		{
			if (s1[i] == s2[i])
				result = 0;
			else
			{
				if (s1[i] < s2[i])
					result = -15;
				else
					result = 15;
				continue;
			}
		}
	}
	return (result);
}
