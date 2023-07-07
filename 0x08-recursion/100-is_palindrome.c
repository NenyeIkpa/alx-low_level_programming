#include <string.h>

/**
 * is_palindrome_recursive - checks if string is a palindrome
 *
 * @s: given string
 * @head: first index of string
 * @tail: last index of string
 *
 * Return: int
 */

int is_palindrome_recursive(char *s, int head, int tail)
{
	if (head > tail)
		return (1);
	if (s[head] == s[tail])
		return (is_palindrome_recursive(s, head + 1, tail - 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: input string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	if (length == 0 || length == 1)
		return (1);
	return (is_palindrome_recursive(s, 0, length - 1));
}
