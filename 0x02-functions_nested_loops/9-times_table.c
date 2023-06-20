#include "main.h"

/**
 * times_table - Prints the 9 times tables starting with 0
 */

void times_table(void)
{
	int rw, cl;

	for (rw = 0; rw < 10; rw++)
	{
		for (cl = 0; cl < 10; cl++)
		{
			if (cl	== 0)
			{
				_putchar('0');
			}
			else if (rw * cl < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(rw * cl + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((rw * cl) / 10 + '0');
				_putchar((rw * cl) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
