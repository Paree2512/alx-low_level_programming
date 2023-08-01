#include "lists.h"

/**
 * pop_listint - Deletes the first node of a linked list
 * @head: Pointer to the first element in the list
 *
 * Return: Integer data inside the elements that was deleted
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;
	int numb;

	if (*head == NULL)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
