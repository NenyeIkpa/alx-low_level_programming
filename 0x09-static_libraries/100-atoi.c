#include <string.h>

/**
 * _atoi - converts a string to an integer
 *
 * Description: coverts string input to an integer
 * @s: input of type string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i, j;
	int length;
	char minus = '-';
	char plus = '+';
	int minus_count = 0;
	int plus_count = 0;

	length = strlen(s);
	for (i = 0; i < length - 1; i++)
	{
		j = 1;
		if (s[i] == minus)
			minus_count++;

		if (s[i] == plus)
		       plus_count++;	

		 if (s[i] >= '0' && s[i] <= '9')
			 s[j++] = s[i];

	}
	if (minus_count > plus_count)
		s[0] = '-';

	return ((int)*s);
}
