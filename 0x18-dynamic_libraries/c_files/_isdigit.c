/**
 * _isdigit - checks for single digit numbers
 *
 * Description: checks if input is a single digit
 * @c: input of type int
 *
 * Return: returns 1 on success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
