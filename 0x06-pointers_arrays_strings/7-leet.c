/**
 * leet - converts certain letters to numbers
 *
 * @str: input of type char
 *
 * Return: char
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
		}
	}
	return (str);
}
