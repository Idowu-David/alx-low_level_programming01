#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: constant byte
 * @n: maximum byte to fill.
 * Return: On success, it returns the filled memory.
 *
 * _memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant b.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}