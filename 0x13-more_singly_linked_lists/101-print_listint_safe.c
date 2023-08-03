#include "lists.h"

/**
 * loop_in_list - return the loop in a given linked list
 *
 * @head: head pointer of given list
 *
 * Description: Floyd's cycle finding algorithm( 2 pointers
 * used to loop through list at different rates(tortoise- one
 * step at a time, hare - 2 steps at a time) finds the loop
 * position in list.
 *
 * Return: loop in given list
 */

const listint_t *loop_in_list(const listint_t *head)
{
	const listint_t *tortoise, *hare, *loop_in_list;

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
			loop_in_list = hare;
			break;
		}
	}
	return (loop_in_list);
}

/**
 * print_listint_safe - prints a list
 *
 * @head: given linked list
 *
 * Description: loops through list and prints until loop
 * position is reached again, prints it and terminates program.
 *
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int loop_reached  = 0;
	const listint_t *loop;

	if (head == NULL)
		exit(98);
	loop = loop_in_list(head);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;

		if (head == loop)
		{
			if (loop_reached == 0)
			{
				loop_reached++;
				continue;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				break;
			}
		}
	}
	return (count);
}
