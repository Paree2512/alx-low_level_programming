#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Start point
 * Return: 0
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	if (0 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	if (o == 0)
		printf("Last digit of %d is %d and 0\n" n, o);
	if (o < 6 && o != 10)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);

	return (0);
}
