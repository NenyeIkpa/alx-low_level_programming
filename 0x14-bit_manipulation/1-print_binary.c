#include "main.h"

/**
 * print_binary - function that prints the
 * binary representation of a number
 *
 * @n: given number
 *
 * Description: get the number of bits in n. starting
 * from the leftmost print each bit's value. using a bitmask
 * extract the i-th bit.
 * Return: binary
 *
 */

void print_binary(unsigned long int n)
{
	int num_in_bits, i;
	unsigned long int bitmask;
	
	num_in_bits = sizeof(unsigned long int) * 8;
	for (i = num_in_bits - 1; i>= 0; i--)
	{
		bitmask = 1UL << i;
		_putchar((n & bitmask) ? '1' : '0');
	}
}
