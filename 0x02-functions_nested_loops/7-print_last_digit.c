#include "main.h"

/**
 * print_last_digit - Print the last digits of a number
 * @num: int to extract the last digit from
 * Return: Value of the last digit
 */

int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;
	a = num % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
