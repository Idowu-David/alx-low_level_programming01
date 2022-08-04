#include "pid.h"

/**
 * main - splits a string and returns an array of each word of the string.
 *
 * Return: Always 0, success.
 */
int main(int ac, char **av)
{
	char *token;
	char *delim = " ";
	int index = 0;

	while (ac != 0)
	{
		token = strtok(av[index], delim);
		while (token)
		{
			index++;
			printf("%s\n", token);
			token = strtok(av[index], delim);
		}
		ac--;
	}
	return (0);
}
