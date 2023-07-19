#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments 
 *
 * @ac: int
 * @av: 2D array
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, total_length, arg_length, current_position;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;
	new_str = malloc((total_length + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		current_position = 0;
		arg_length = strlen(av[i]);
		strncpy(new_str + current_position, av[i], arg_length);
		current_position += arg_length;
		new_str[current_position++] = '\n';
	}
	new_str[total_length] = '\0';
	return (new_str);
}
