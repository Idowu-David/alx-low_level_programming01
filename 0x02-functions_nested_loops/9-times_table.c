#include "main.h"
/**
 * times_table - Print 9 times table
 *
 * Return: Void.
 */
void times_table(void)
{
	int num1, num2, mult;

	for (num2 = 0; num2 < 10; num2++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{
			mult = num1 * num2;
			if (num1 == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			if (num1 != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}