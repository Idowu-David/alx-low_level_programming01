#include <stdio.h>

/**
 * main - This program prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}

