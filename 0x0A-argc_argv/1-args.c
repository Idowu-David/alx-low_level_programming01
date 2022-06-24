#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0, if success.
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%d\n", argc - 1);
	else if (argc > 1)
		printf("%d\n", argc - 1);
	return (0);
}
