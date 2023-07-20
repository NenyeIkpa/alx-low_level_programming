#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes
 *
 * @opcde: int argument
 *
 * Return: nothing
 */

void print_opcodes(int opcde)
{
	int i;
	unsigned char *ptr;

	ptr = (unsigned char *)print_opcodes;
	for (i = 0; i < opcde; i++)
		printf("%02x ", ptr[i]);
	printf("\n");
}


/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(atoi(argv[1]));
	return (0);
}
