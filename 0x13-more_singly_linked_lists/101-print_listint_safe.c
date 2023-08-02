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
	listint_t *temp;

	if (head == NULL)
		exit(98);
	printf("[%p] %d\n", (void *)head, head->n);
	count = 1;
	temp = head->next;
	while (temp != NULL && temp != head)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
	}
	exit (98);
	return (count);
}
