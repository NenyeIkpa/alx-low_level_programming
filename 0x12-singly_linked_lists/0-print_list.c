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
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (sizeof(h));
}
