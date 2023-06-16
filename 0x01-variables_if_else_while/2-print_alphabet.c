#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowecase letters
 * using putchar
 *
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
