/**
 * _strlen - gets the length of a string
 *
 * Description: calculates the length of a string and returns its value
 * @s: input of type char
 *
 * Return: returns an int
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
