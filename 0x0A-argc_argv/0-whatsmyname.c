#include <stdio.h>

/**
 * main - entry point. prints name of program
 *
 * @argc: argument count*
 * @argv: string array of arguments
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
