#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all hexadecimal
 * numbers using putchar a max of 3 times
 *
 * Return: returns 0
 */

int main(void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
