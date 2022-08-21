#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n:  number to be printed
 *
 * Return: void
 */


void print_number(int n)
{
	unsigned int num, rem, div = 1;
	int clone;

	clone = n;
	num = 0;
	if (clone != 0)
	{
		while (clone != 0)
		{
			clone = clone / 10;
			num++;
		}
		num--;
		while (num != 0)
		{
			div *= 10;
			num--;
		}
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (div != 0)
	{
		rem = n % div;
		n /= div;
		_putchar(n + '0');
		n = rem;
		div /= 10;
	}
}
