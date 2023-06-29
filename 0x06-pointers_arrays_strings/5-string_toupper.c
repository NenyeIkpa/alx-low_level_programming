/**
 * string_toupper - converts lower to upper case
 *
 * @str: given string
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int i, j;
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == lower[j])
				str[i] = upper[j];
		}
	}
	return (str);
}
