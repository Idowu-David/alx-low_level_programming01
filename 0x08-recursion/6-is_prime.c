#include "main.h"

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
                        return (0);
        }
	return (0);
}
