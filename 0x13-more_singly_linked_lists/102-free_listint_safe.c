#include "lists.h"

size_t free_listint_safe(listint_t **h);

/**
 * free_listint_safe - frees a list
 *
 * @h: pointer to head pointer of list
 *
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int loop_reached  = 0;
	const listint_t *loop, *temp;

	if (h == NULL || *h == NULL)
		return (0);
	loop = loop_in_list(*h);
	if (loop == *h)
	{
		while ((*h)->next != loop)
		{
			temp = *h;
			count++;
			*h = (*h)->next;
			free((void *)temp);
		}
		free(*h);
		*h = NULL;
		return (++count);
	}
	while (*h != NULL)
	{
		temp = *h;
		count++;
		*h = (*h)->next;
		free((void *)temp);
		if (*h == loop)
		{
			if (loop_reached == 0)
			{
				loop_reached++;
				continue;
			}
			else
			{
				free(*h);
				*h = NULL;
				break;
			}
		}
	}
	return (count);
}
