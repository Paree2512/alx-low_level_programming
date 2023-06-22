#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @n: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
