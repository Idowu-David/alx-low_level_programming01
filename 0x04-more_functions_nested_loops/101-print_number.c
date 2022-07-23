#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer.
 *
 * Return: Returns 0, success.
 */
void print_number(int n)
{
	int div;

	div = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while ((n / div) > 9)
		div *= 10;
	while (div != 0)
	{
		_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
}
