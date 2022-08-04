#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array or NULL,
 * - if min > max and
 * - if malloc fails.
 * The created array should contain all the values from min(included)
 * to max(included), ordered from min to max.
 */
int *array_range(int min, int max)
{
	int *ptr, index, index2;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (index = 0, index2 = min; index2 <= max; index++, index2++)
		ptr[index] = index2;
	return (ptr);
}
