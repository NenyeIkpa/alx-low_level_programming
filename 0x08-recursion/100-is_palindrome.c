#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: given string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int length, isSame = 0;

	length = strlen(s);
	if (length <= 1)
		return (1);
	if (*s == *(s + length - 1))
	{
		isSame = 1;
		return (is_palindrome(s + 1));
	}
	return (isSame);
}
			
