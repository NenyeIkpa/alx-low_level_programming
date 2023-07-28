#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 *
 * @head: head of list
 * @str: element to be added to list
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new_tail, *curr, *prev;

	dup = strdup(str);
	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new_tail;
	else
	{
		curr = *head;
		while (curr != NULL)
		{
			prev = curr;
			curr = curr->next;
		}
		prev->next = new_tail;
	}
	new_tail->str = dup;
	new_tail->len = strlen(str);
	new_tail->next = NULL;
	return (new_tail);
}
