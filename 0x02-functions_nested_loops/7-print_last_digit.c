#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to be printed
 *
 * Return: Returns the last digit of the number.
 */
int print_last_digit(int n)
{
	int lastDig;

	lastDig = n % 10;
	return (lastDig);
}
