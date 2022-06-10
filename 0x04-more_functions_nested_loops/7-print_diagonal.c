#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: number of times the diagonal will print
 *
 * Return: Returns 0, success.
 */
void print_diagonal(int n)
{
	int row, col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < row; col++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
