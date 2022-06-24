#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0, if success.
 * else, returns 1.
 */

int main(int argc, char **argv)
{
	int i, numCheck, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			numCheck = Isnumber(argv[i]);
			if (numCheck == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * isnumber - checks if the argument passed is a number
 * @str: string passed from argument vector.
 *
 * Return: returns 1, if success, returns 0, if not a number.
 */
int isnumber(const char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}
	return (0);
}
