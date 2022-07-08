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
	unsigned int i, collector;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		collector = va_arg(args, unsigned int);
		if (i != (n - 1) && separator != NULL)
			printf("%d%s", collector, separator);
		else if (separator == NULL && i != (n - 1))
			printf("%d", collector);
		else
			printf("%d\n", collector);
	}
	va_end(args);
}
