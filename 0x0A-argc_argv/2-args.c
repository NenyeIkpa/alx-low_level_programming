#include <stdio.h>

/**
 * main - entry point. prints all arguments passed
 *
 * @argc: arg count
 * @argv: string array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i  = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
