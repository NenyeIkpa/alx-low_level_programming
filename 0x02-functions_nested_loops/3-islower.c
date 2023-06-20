#include "main.h"

/**
 * _islower - checks whether character is
 * upper or lower case.
 *
 * Description: uses if else to check character's
 * case. prints 1 if lower and 0 otherwise.
 * @c: input of type int
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
