#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Description: endianess describes the order in which
 * a sequence of bytes is stored in the memory of a
 * computer
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int start = 1;
	char *endian_value = (char *)&start;

	if (*endian_value != 1)
		return (0);

	return (1);
}
