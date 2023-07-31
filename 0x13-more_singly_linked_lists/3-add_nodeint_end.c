#include "lists.h"

/**
 * add_nodeint_end - inserts node at the end of a linked list
 *
 * @head: pointer that points to head pointer of a list
 * @n: int to be placed in node to be inserted
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *temp;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
		*head = new_tail;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_tail;
	}
	return (new_tail);
}
