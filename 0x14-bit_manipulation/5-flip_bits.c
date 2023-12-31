#include "main.h"

/**
 * flip_bits - Sums up the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, sum_up = 0;
	unsigned long int current;
	unsigned long int absolute = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = absolute >> i;
		if (current & 1)
			sum_up++;
	}
	return (sum_up);
}
