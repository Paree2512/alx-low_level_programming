#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int x, y;
	int dayDone = 0;

	for (y = 0; y < 24; y++)
	{
		for (x = 0; x < 60; x++, dayDone++)
		{
			if (dayDone == 1440)
				break;
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');
		}
	}
}
