#include "main.h"

/**
 * get_bit - function that returns the value of
 * a bit at a given index
 * @n: long int
 * @index: index starting from 0 of the bit
 *
 * Return: Value of the bit at an index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
