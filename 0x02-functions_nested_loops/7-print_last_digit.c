#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: number to be printed
 *
 * Return: Returns the last digit of the number.
 */
int print_last_digit(int num)
{
	int last;

	last = (num % 10);
	_putchar(last + '0');
	return (last);
}
