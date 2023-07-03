#include <string.h>

/**
 *  _strspn - gets the length of a prefix substring
 *
 *  @s: given string
 *  @accept: prefix substring
 *
 *  Return: unsigned int
 */

int _strspn(char *s, char *accept)
{
	int i, j, first_idx, last_idx, accept_length, final;

	accept_length = strlen(accept);
	for (i = 0; i < accept_length; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[0] == s[j])
				first_idx = j;
			else if (accept[accept_length - 1] == s[j])
			{
				last_idx = j;
			}
		};
	}

	if (first_idx > last_idx)
		final = first_idx - last_idx;
	else
		final = last_idx - first_idx;
	return (final);
}
