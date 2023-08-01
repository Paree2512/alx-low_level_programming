#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{

	const listint_t *tmp;
	unsigned int numb = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		numb++;
		tmp = tmp->next;
	}

	return (numb);
}
