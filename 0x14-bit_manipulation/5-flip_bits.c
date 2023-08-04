#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Description: counts the number of set bits in outcome
 * using Brian Kernighan's algorithm.
 *
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int outcome;
	unsigned int count = 0;

	outcome = n ^ m;
	while (outcome != 0)
	{
		outcome &= (outcome - 1);
		count++;
	}
	return (count);
}
