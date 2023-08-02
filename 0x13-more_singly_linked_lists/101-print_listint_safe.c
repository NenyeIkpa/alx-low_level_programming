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
	size_t count = 0;
	const listint_t *temp, *hold = NULL;

	if (head == NULL)
		exit(98);
	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		if (temp <= temp->next && hold != NULL)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		hold = temp;
		temp = temp->next;
	}
	return (count);
}
