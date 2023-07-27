#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: head of list
 * @str: element to establish as head of list
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_first;

	dup = strdup(str);
	new_first = malloc(sizeof(list_t));
	if (new_first == NULL || str == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_first;
		new_first->str = dup;
		new_first->len = strlen(str);
		new_first->next = NULL;
	}
	else
	{
		new_first->str = dup;
		new_first->len = strlen(str);
		new_first->next = *head;
		*head = new_first;
	}
	return (*head);
}
