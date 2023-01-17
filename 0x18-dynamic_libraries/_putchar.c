#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a char to stdout
 * @c: character
 * Return: number of character printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
