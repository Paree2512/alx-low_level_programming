#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Address of the first node in the list
 * @n: Integer data to be inserted into the new node
 *
 * Return: Address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
