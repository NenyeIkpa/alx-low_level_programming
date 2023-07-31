#include "lists.h"

/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to first node of list
 *
 * Return: sum of all data in list
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for( ; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}
