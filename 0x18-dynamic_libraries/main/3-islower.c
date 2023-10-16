#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @a: ASCII value being checked
 *
 * Return: 1 if lower, otherwise 0
 */
int _islower(int a)
{
	if (a >= 97 && a <= 122)
		return (1);
	else
		return (0);
}
