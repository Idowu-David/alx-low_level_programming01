#include "main.h"
/**
 * _is_prime - part of the square root function,
 * to check if the number is prime, then, it doesn't have
 * a square root.
 * @num: number
 * @checker: checker - as a divisor through the number.
 * @i: checker2
 */

int _is_prime(int num, int checker, int i)
{
	if ((num < 0) || (num == 1)) /**
				      * number less than 0 or
				      * equal to 1 is not prime
				      */
		return (0);
	if (num == checker) /* if number is same as checker,number is prime */
		return (1);
	i = (num % checker); /**
			      * get the remainder when
			      * number divides checker*/
	if (i != 0) /**
		     * if the remainder is not zero, call the
		     * function recursively to start all over
		     * increment checker */
		return (_is_prime(num, checker + 1, 1));
	else /**
	      * if none of the conditions are true, number is not prime
	      */
		return (0);
}

/**
 * _sqrt - finds the square root of a number
 * @n: number
 * @checker: checker
 *
 * Return: returns -1, if number doesnt have a root
 * returns 1, if number is 1 and returns the root
 * if number has a root.
 */

int _sqrt(int n, int checker)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if ((n == checker) && (n != 1))
		return (-1);
	if ((n / checker) == checker)
	{
		if (checker * checker == n)
		{
			return (checker);
		}
	}
	else
	{
		return (sqrt(n, checker + 1));
	}
}

/**
 * _sqrt_recursion: returns the square root for the number.
 * @n: number
 *
 * Return: returns the root.
 */
int _sqrt_recursion(int n)
{
	int num1, num2;

	num1 = _is_prime(n, 2, 1); /* call the _is_prime func*/
	num2 = _sqrt(n, 1); /* call the sqrt func */
	if (num1 == 1)
		return -1;
	return (num2);
	return (0);
}
