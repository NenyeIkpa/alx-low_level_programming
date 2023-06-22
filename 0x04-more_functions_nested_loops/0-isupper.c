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
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
