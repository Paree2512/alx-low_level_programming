#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @a: the character to be checked
 * Return: 1 if a is an alphabet otherwise 0
 */

int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
