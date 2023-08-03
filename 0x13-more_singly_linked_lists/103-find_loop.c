#include "lists.h"

/**
 * find_listint_loop - finds loop in a list
 *
 * @head: head pointer of list
 *
 * Return: address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *loop;

	loop = loop_in_list(head);
	if (head == loop)
		return (head);
	while (head != NULL)
	{
		if (head->next == loop)
		{
			return ((void *)head->next);
		}
		head = head->next;
	}
	return (NULL);
}
