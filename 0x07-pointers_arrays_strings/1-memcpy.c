#include "main.h"

/**
 * *_memcpy - copies memory area from src to dest
 * @dest: destination which the string is to be copied into
 * @src: source string
 * @n: max byte to copy from src string
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; src[index] != src[n]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
