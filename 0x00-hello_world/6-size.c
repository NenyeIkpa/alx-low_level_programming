#include <stdio.h>
/**
*main - entry point
*no arguments
*
*Description: prints sizes of different data
*types in C.
*Return: return value is 0
 */
int main(void)
{
	int intSize;
	char charSize;
	long int longIntSize;
	long long int longLongIntSize;
	float floatSize;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intSize));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longIntSize));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongIntSize));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatSize));
	return (0);
}
