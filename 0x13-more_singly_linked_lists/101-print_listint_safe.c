#include "lists.h"

/**
 * print_listint_safe - prints a list
 *
 * @head: given linked list
 *
 * Return: number of nodes in list
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}
	return (count);
}
