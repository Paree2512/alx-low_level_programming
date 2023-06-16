#include <stdio.h>
/**
 * main - Start point
 * Return: 0
 */

int main(void)
{
	int numz;

	for (numz = 0; numz < 10; numz++)
		putchar((numz % 10) + '0');
	putchar('\n');

	return (0);

}
