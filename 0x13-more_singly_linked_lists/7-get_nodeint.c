#include "lists.h"

/**
 * get_nodeint_at_index - Returns a node in a linked list
 * @head: Address of the first node in the linked list
 * @index: Index of the node to return - Starting from 0
 *
 * Return: Address to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp ? tmp : NULL);
}
