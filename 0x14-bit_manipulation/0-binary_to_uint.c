#include "main.h"

/**
 * binary_to_uint - prints binary converted to decimal(base 10)
 *
 * @b: given binary
 *
 * Return: number as unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, product;
	int i, digit, pow = 0, str_len;

	if (b == NULL)
		return (0);
	str_len = strlen(b);
	for (i = 0; i < str_len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		pow = str_len - i - 1;
		product = 1;
		if (pow == 0)
			product *= 1;
		while (pow > 0)
		{
			product = product * 2;
			pow--;
		}
		digit = b[i] - '0';
		num = num + (digit * product);
	}
	return (num);
}
