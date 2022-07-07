#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - prints a string.
 * @separator: character to separate the strings.
 * @n: number of arguments.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *collector;

	va_start(args, n);
	if (separator == NULL)
		separator = " ";
	for (i = 0; i < n; i++)
	{
		collector = va_arg(args, char*);
		if (collector == NULL)
			collector = "(nil)";
		if (i != (n - 1))
			printf("%s%s", collector, separator);
		else
			printf("%s\n", collector);
	}
	va_end(args);
}
