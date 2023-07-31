#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list,
 * and returns the head node’s data.
 *
 * @head: pointer to head node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
