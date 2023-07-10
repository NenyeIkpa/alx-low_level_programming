#include <stdlib.h>

/**
 * create_array - creates an array of char, initializes
 * with a specific char
 *
 * @size: parameter of type int
 * @c: parameter of type char
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_array;

	if (size == 0)
		return (NULL);
	char_array = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		char_array[i] = c;
	return (char_array);
}
