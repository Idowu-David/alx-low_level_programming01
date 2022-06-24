#include "main.h"
/**
 * _abs - display the absolute value of a number.
 *
 * Return: Returns 0;
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return n;
	}
	else
		return n;
}
