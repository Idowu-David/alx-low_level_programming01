#include "main.h"

/**
 * *_memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] != src[n]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
