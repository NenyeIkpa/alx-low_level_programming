#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all lowercase
 * letters except for q and e using
 * putchar max of 2 times and ending
 * with a new line.
 *
 * Return: returns 0
 */

int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'e' && k != 'q')
			putchar(k);
	}
	putchar('\n');
	return (0);
}
