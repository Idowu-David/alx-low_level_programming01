#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: character to check
 * Return: 0 if character is not a digit, else, 1.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
