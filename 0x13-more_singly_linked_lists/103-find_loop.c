#include "lists.h"

/**
 * find_listint_loop - finds loop in a list
 *
 * @head: head pointer of list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);
	tortoise = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = head;
			while (tortoise->next != hare)
				tortoise = tortoise->next;
			return (tortoise->next);
		}
	}
	return (NULL);
}
