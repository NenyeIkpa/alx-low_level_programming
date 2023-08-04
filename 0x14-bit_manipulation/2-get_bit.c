#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: unsigned long int
 * @index: index of bit to return
 *
 * Description: check if index is within valid range of
 * unsigned long int. Create a bitmask with only the bit
 * at given index set to 1. check if bit at index is set to 1 or 0.
 *
 * Return: 1, 0 or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;

	bitmask = 1UL << index;
	if (index >= sizeof(n) * 8)
		return (-1);
	if (n & bitmask)
		return (1);
	return (0);
}
