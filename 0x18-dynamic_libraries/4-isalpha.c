#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character to be checked.
 *
 * Return: Returns 1, if Success. Otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
