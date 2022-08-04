#include "pid.h"

/**
 * main - prints arguments passed without using ac
 *
 * Return: Always 0, success.
 */

int main(int ac, char **av)
{
	int index = 0;
	(void)ac;

	while(av[index])
	{
		printf("%s\n", av[index]);
		index++;
	}
	return (0);
}
