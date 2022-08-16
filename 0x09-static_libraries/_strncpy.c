#include "main.h"
/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
*/


char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != src[n]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
