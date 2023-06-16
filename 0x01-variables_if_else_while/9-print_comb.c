#include <stdio.h>
/**
 * main - Start point
 * Return: 0
 */

int main(void)
{
	int x;

	x = '0';

	while (x <= '9')
	{
		putchar (x);
		if (x != '9')
		{
			putchar (',');
			putchar (' ');
		}
		++x;
	}
	putchar ('\n');

	return (0);
}
