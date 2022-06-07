#include "main.h"
/**
 * main - prints the letter of _putchar
 *
 * Return: Returns 0, if success.
 */
int main(void)
{
	char c[10] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
