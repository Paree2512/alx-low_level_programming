#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charactoer to stdout
 * Return: On success 1
 * On error, -1 is returned and error is set sppropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
