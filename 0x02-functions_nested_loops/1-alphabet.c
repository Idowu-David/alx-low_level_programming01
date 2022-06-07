#include "main.h"
/**
 * main - prints the letters of the alphabet in lowercase
 *
 * Return: Returns 0, Success.
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
