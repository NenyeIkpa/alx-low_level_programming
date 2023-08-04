#include "main.h"

/**
 * set_bit - function that sets the value of a bit at a given index
 *
 * @n: unsigned long int
 * @index: index of bit to return
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	bitmask = 1UL << index;
	if (index >= sizeof(n) * 8)
		return (-1);
	*n |= bitmask;
	return (1);
}
