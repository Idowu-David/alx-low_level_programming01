#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * Return: returns 0, always.
 */
int main(int argc, char **argv)
{
	int mult;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return 1;
	}
	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mult);
	return (0);
}


