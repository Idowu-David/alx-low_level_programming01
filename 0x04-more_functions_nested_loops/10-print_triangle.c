#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size or height of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, col, decr, space, count;

	count = decr = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col <= row; col++)
			{
				for (space = 0; space < (size - decr); space++)
					_putchar(' ');
				decr = size;
				_putchar('#');
			}
			count++;
			decr = count;
			_putchar('\n');
		}
	}
}
