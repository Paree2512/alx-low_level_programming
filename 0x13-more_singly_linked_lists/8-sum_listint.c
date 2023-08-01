#include "lists.h"

/**
 * sum_listint - Sums all the data in a linked list
 * @head: Address of the first node in the linked list
 *
 * Return: Total
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		total += tmp->n;
		tmp = tmp->next;
	}

	return (total);
}
