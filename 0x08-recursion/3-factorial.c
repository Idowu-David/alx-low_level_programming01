#include "main.h"

/**
 * factorial - calculates the factorial
 * of a number recursively.
 * @n: number
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}
