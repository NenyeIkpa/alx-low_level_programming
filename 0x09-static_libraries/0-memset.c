/**
 * _memset - fills memory with a constant byte
 *
 * @s: character string pointed to by n
 * @n: bytes of memory to be filled
 * @b: constant that fills n
 *
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
