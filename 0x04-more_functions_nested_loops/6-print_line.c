#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @num: number of times the character _ should be printed
 */
void print_line(int num)
{
	if (num <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= num; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
