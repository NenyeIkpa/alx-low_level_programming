/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: given string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (count);
	_strlen_recursion(s + 1);
	return (count++);
}
