#include "lists.h"

/**
 * free_list - frees a linked list
 *
 * @head: head of list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head->str);
	free(head);
}
