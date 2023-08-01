#include "lists.h"

/**
 * print_listint - function that prints all elements in a list
 * @h: holds the head to the linked list
 *
 * Return: number of nodes
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
