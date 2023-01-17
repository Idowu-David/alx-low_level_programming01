#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked.
 *
 * Return: Returns 1, if c is uppercase.
 * Returns 0, if otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
