#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array.
 * @c: character.
 *
 * Return: returns NULL,if size is 0
 * returns the character, if successful.
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = (char *)malloc(size * sizeof(c));
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
