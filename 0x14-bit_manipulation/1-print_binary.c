#include "main.h"

/**
 * print_binary - prints the binary equivalent of a num
 * @n: long integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, sum_up = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			sum_up++;
		}
		else if (sum_up)
			_putchar('0');
	}
	if (!sum_up)
		_putchar('0');
}
