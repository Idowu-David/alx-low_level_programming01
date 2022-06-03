#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a positive or negative or zero.
 * @n: random number.
 *
 * Return: Returns (0), Success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
