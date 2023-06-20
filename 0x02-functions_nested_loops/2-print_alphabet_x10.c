#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 * in lowercase followed by a new line
 */

void print_alphabet_x10(void)
{
	char l;
	int i;

	i = 0;

	while (i < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
