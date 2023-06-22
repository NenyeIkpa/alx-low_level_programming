/**
 * _isupper - checks for uppercase characters
 *
 * Description: takes an input and checks if it's
 * an uppercase
 * @c: type of int
 *
 * Return: type of int
 */

int _isupper(int c)
{
	char input;

	for (input = 'A'; input <= 'Z'; input++)
	{
		if (c == input)
			return (1);
	}
	return (0);
}
