#include "main.h"

/**
 * _isupper - Uppercase letters
 * @l: letter to check
 *
 * Return: 0 or 1
 */

int _isupper(int l)
{
	if (l >= 'A' && l <= 'Z')
		return (1);
	else
		return (0);
}
