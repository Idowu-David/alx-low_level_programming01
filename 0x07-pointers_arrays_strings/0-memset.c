#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the constant.
 * @b: constant
 * @n: max byte.
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
