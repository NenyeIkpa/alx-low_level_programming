/**
 * cap_string - capitalizes all words in a string
 *
 * @str: given string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int i, j, k;
	int special_xters[26] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			for (k = 0; k < 26; k++)
			{
				if (str[0] == lower[k])
					str[0] = upper[k];
				if (str[i - 1] == special_xters[j] && str[i] == lower[k])
				str[i] = upper[k];
			}
		}
	}
	return (str);
}
