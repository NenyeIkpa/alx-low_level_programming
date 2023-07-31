#include "lists.h"

/**
 * add_nodeint - inserts a new node at the beginning
 * of a list
 *
 * @head: pointer that points ot the head pointer of a list
 * @n: int to be placed in new node
 *
 * Return: linked list of type listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	if (*head == NULL)
		*head = new_head;
	else
	{
		new_head->next = *head;
		*head = new_head;
	}
	return (*head);
}
