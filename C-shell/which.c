#include "pid.h"

/**
 * main -  looks for files in the PATH
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	unsigned int index;
	struct stat st;
	int status;

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	index = 1;
	while (av[index])
	{
		status = stat(av[index], &st);
		if (status == 0)
		{
			printf("%s\n", av[index]);
			return (0);
		}
		else
			return (1);
		index++;
	}
	return (0);
}	
