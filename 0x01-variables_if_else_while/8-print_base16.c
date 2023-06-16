#include <stdio.h>
/**
 * main - Start point
 * Return: 0
 */

int main(void)
{
	int numb;
	char letter;

	for (numb = 0; numb < 10; numb++)
		putchar ((numb % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);
	putchar ('\n');

	return (0);

}
