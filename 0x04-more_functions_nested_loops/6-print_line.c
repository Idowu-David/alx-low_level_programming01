#include "main.h"
/**
 * print_line - prints a line.
 * @n: number of times line will be printed.
 *
 * Return: void.
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int ch = 0; ch <= n; ch++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
