#include "main.h"
/**
 * _abs - prints the absolute value
 * of a number.
 * @num: number to be checked
 *
 * Return: Returns 0, if success.
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num == 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		num = -num;
		return (num);
	}
	return (0);
}
