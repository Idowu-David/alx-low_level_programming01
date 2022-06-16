#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i <= n; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n] = temp;
		n--;
	}
}
