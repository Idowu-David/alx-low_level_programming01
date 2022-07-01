#include "main.h"
#include <stdlib.h>

/**
 * fill_mem - fills memory with constant char.
 * @s: string.
 * @b: char.
 * @n: number of bytes.
 * 
 * Return: returns a pointer to the filled memory.
 */
char *fill_mem(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements
 * @size: size of the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array, i;

	if (nmemb == 0 || size == 0)
		return NULL;
	array = malloc(nmemb * size);
	if (array == NULL)
		return NULL;
	fill_mem(array, 0, (nmemb * size));
	return (array);
}
