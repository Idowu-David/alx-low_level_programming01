#include <stdio.h>

/**
 * main -  calculate largest prime factor of 612852475143
 *
 * Return: returns 0, if success.
 */

int main(void)
{
	long int x = 612852475143;
	long int prime;

	for (prime = 2; prime < x; prime++)
	{
		if (x % prime == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
