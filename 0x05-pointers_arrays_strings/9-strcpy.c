#include "main.h"

/**
 * *_strcpy - copies a string
 *
 * Description: copies a string from one
 * variable to another
 * @src: input string
 * @dest: copy destination
 *
 * Return: char type
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;

	for (i = 0; i <= count; i++)
		dess[i] = src[i];

	return (dest);
}
