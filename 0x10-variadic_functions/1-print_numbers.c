#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints variable numbers
 * @separator: character to separate the numbers.
 * @n: number of integers to print.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int collector;
	
	if (!n)
		return;
	va_start(args, n);
	if (separator == NULL)
		separator = " ";
	for (i = 0; i < n; i++)
	{
		collector = va_arg(args, int);
		if (i != (n - 1))
			printf("%d%s", collector, separator);
		else
			printf("%d\n", collector);
	}
	va_end(args);
}
