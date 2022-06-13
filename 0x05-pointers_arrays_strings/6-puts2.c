#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * starting with the first character
 * @str: string pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
