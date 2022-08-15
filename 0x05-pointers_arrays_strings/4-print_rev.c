#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		j = i - 1;
		_putchar(s[j]);
		--i;
	}
	_putchar('\n');
}
