#include <stdio.h>

/**
 * main - prints a program's name
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: returns 0.
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
