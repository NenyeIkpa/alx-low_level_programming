#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * Description: if alphabet, not character sensitive
 * returns 1
 * @c: type of int
 *
 * Return: type of int
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
