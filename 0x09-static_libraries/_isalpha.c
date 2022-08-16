#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return: 0 if character is not an alphabet, else 1.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
