#include "main.h"
/**
 * _abs - display the absolute value of a number.
 *
 * Return: Returns 0;
 */
int _abs(int n)
{
	int n, bool1, bool2, booldiff, abs;

	bool1 = (n > 0);
	bool2 = (n < 0);
	booldiff = (bool1 - bool2);
	abs = (n * booldiff);
	putchar(abs(n) + '0');
	return (0);
}
