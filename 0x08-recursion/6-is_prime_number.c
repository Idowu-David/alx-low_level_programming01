#include "main.h"
/**
 * _is_prime - checks if a number is prime
 * @num: number to be checked
 * @checker: checker for prime
 * @i: checker
 *
 * Return: returns 1, if number is prime, else, returns 0.
 */
int _is_prime(int num, int checker, int i)
{
	if ((num < 0) || (num == 1))
		return (0);
	if (num == checker)
		return (1);
	i = (num % checker);
	if (i != 0)
		return (_is_prime(num, checker + 1, 1));
	else
		return (0);
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: returns 1, if n is prime.
 * returns 0, if otherwise.
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2, 1));
}
