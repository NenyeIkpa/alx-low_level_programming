/**
 * rev_string - reverses a string
 *
 * Description: reverses a string. does not
 * print to stdout and returns nothing
 * @s: string input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
