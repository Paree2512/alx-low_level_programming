#include "lists.h"

/**
 * sum_dlistint - function gets sum of data in doubly linked list
 * @head: pointer to head of doubly linked list
 *
 * Return: Sum, or 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
