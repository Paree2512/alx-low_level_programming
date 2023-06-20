#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 * @n: Print from this number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
