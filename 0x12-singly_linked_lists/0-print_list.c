#include "lists.h"

/**
 * print_list - prints all the elements in a linked list
 *
 * @h: linked list
 *
 * Return: size_t(number of nodes)
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
