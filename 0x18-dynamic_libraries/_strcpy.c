#include "main.h"

/**
 * *_strcpy -  copy a string
 * @dest: string to be copied into.
 * @src: string to be copied
 *
 * Description: Copy the string pointed to by pointer src to
 * the buffer pointed to by dest
 * Return: Pointer to dest whic is the newly copied string.
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
