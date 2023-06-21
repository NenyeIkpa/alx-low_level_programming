#include "main.h"

void print_putchar(void)
{
	int num = 0;
	char text[8] = "_putchar";
	while (text[num] != '\0')
	{
		_putchar(text[num]);
		num++;
	}
	_putchar('\n');
}
