#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		j = (n - 1) / 2;
		for (i = j + 1; i <= n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
