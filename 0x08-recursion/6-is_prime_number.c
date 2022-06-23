#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: returns 1, if n is prime.
 * returns 0, if otherwise.
 */
int is_prime_number(int n)
{
	int num;

	num = _is_prime(n, 2, 1);
	return (num);
}
