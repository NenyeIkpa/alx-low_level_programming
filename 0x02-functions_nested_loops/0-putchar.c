/**
 * main - entry point
 *
 * Description: prints _putchar without
 * the use of the stdio.h functions
 *
 * Return: returns 0
 */

int main(void)
{
	char _putchar(char);
	char *textToPrint = "_putchar";
	int z = 0;

		while (textToPrint[z] != '\0')
		{
			_putchar(textToPrint[z]);
			z++;
		}
	_putchar('\n');
	return (0);
}
