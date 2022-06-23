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

/**
 * _is_prime - inner function for is_prime_number.
 * @num: number
 * @checker: checker for prime
 * @i: checker for prime.
 *
 * Return: returns 0, if num is not prime
 * returns 1, if num is prime.
 */

int _is_prime(int num, int checker, int i)
{
        if (num < 0)
                return (0);
        if (num == 1)
                return (0);
        if (num == checker)
                return 1;
        else
        {
                i = (num % checker);

                if (i != 0)
                        _is_prime(num, checker + 1, 1);
                else
                        return 0;
	}
}
