#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns the index where it was found
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 * @array: pointer to the array.
 *
 * Return: returns the index of the position of the element if found.
 * returns -1 if element does not match.
 * returns -1 if the size passed is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int flag = 0; /* if at any point flag is set to 1, element is found. */
	/* else, element is not found. */
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				flag = 1;
				return (i);
			}
		}
		if (flag == 0)
			return (-1);
	}
	return (0);
}
