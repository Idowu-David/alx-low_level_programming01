#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: number to be printed.
 * 
 * Return: Returns 1 if n is greater than 0.
 * returns 0 if n is 0.
 * returns -1 if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 48)
	{
		_putchar(45);
		return(-1);
	}
}
