#include "main.h"

/**
 * _islower - check for lower case letter
 * @c : character to check the case
 * Return: 0 if character is not lower case else, 1.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
