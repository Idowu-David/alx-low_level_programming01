#include "main.h"
/**
 * main - prints the letters of _putchar
 *
 * Return: returns 0, Success.
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
