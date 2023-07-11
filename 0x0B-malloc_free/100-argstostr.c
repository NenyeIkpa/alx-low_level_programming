#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments 
 *
 * @ac: int
 * @av: 2D array
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	new_str = malloc(ac * sizeof(char) + ac - 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		*(new_str + i) = **(av + i);
	return (new_str);
}
