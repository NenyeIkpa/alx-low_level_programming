#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit
 * base 10 numbers without char type variables
 * and using putchar function
 *
 * Return: returns 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}


