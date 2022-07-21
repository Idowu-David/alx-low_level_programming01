#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in denary.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned int check = 32768;

	while (check > 0)
	{
		if ((n & check) == 0)
			_putchar('0');
		else
			_putchar('1');
		check = check >> 1;
	}
}
