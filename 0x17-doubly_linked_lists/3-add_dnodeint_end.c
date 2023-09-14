#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a
 * doubly linked list
 *
 * @head: head pointer of list
 * @n: data of new node to be added
 *
 * Return: address of new element if successful else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
		new_node->prev = curr;
	}
	return (new_node);
}
