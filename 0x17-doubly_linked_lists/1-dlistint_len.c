#include "lists.h"

/**
 * dlistint_len - function counts and returns num
 * of elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes += 1;
	}

	return (nodes);
}
