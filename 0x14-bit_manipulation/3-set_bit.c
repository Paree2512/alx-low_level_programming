#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set
 *
 * Return: 1 for success, -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
