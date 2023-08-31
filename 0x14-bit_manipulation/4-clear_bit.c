#include "main.h"

/**
 * clear_bit - sets the value of the bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit
 *
 * Return: 1 for success, -1 if fails
 */

int clear_bit(unsigned long *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
