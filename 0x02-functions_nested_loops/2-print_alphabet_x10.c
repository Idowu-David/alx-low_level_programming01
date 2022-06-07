#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet letters
 * in lowercase 10 times.
 *
 * Return: Returns 0. success.
 */
void print_alphabet_x10(void)
{
	int alp, i;

	i = 0;
	while (i <= 10)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		i++;
		_putchar('\n');
	}
}
