#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0, if success.
 * returns 1, if error.
 */

int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i <= 2; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
