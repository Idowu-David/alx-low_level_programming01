#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: number to be printed
 *
 * Return: Returns the last digit of the number.
 */
int print_last_digit(int num)
{
	int last =  num % 10;

	if (last > 0)
	{
		_putchar(last + '0');
		return (last);
	}
	else if (last < 0)
	{
		last = -last;
		_putchar(last + '0');
		return (last);
	}
	return (0);
}
