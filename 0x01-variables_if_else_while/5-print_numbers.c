#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single
 * digit base 10 numbers ending
 * with a new line
 *
 * Return: returns 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
