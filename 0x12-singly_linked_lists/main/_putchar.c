#include <unistd.h>

/**
 * _putchar - prints value of c
 * @c: character to print
 *
 * Return: 0, success.
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
