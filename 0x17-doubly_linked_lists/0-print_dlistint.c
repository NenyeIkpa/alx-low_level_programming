#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 *
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;
	dlistint_t *base;

	base = (void *)h;
	while (base != NULL)
	{
		printf("%d\n", base->n);
		len++;
		base = base->next;
	}
	return (len);
}
