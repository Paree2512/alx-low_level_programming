#include "lists.h"

/**
 * free_dlistint - function frees a doubly linked list
 * @head: pointer to head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
