#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
