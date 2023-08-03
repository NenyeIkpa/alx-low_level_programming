#include "lists.h"

/**
 * print_listint_safe - prints a list. detects loop in list
 * using Floyd's cycle-finding algorithm.
 *
 * @head: given linked list
 *
 * Description: using two pointers(Floyd's cycle finder) loop through
 * list and locate loop. loop through list again and print until loop
 * point is reached again. print the loop and end program.
 *
 * Return: number of nodes in list
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise, *hare, *loop_in_list;
	int loop_reached = 0;

	if (head == NULL)
		exit(98);
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
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;

		if (head == loop_in_list)
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
