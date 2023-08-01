#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Address of the first element in the list
 * @n: Integer data to insert into the new element
 *
 * Return: Address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp0;
	listint_t *temp = *head;

	temp0 = malloc(sizeof(listint_t));
	if (!temp0)
		return (NULL);

	temp0->n = n;
	temp0->next = NULL;

	if (*head == NULL)
	{
		*head = temp0;
		return (temp0);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = temp0;

	return (temp0);
}
