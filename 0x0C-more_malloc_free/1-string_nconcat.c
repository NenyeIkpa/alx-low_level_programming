#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 *
 * Return: char*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_length, s2_length, copy_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	copy_length  = n > s2_length ? s2_length : n;
	ptr = malloc(sizeof(char) * (s1_length + copy_length + 1));
	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, s1_length);
	memcpy(ptr + s1_length, s2, copy_length);
	ptr[s1_length + copy_length] = '\0';
	return (ptr);
}
