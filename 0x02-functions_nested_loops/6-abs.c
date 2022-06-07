#include "main.h"
/**
 * _abs - prints the absolute value of a number.
 * @n: number whose absolute iss to be printed.
 *
 * Return: Returns 0, if success.
 */
int _abs(int n)
{
	int bool1, bool2, booldiff, abs;

	bool1 = (n > 0);
	bool2 = (n < 0);
	booldiff = (bool1 - bool2);
	abs = (n * booldiff);
	_putchar(_abs(n) + '0');
	return (0);
}
