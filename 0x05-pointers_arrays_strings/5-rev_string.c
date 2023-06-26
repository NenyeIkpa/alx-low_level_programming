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
	int i, count = 0;
	char *output;

	output = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0; i < count; i++)
		output[i] = s[count - i -1];

	s = output;
}
