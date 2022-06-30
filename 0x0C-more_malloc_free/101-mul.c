#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 *
 * Return: returns 0, if success. else 1.
 */
int isnumber(char *str);/* prototype for isnumber function */
int main(int argc, char **argv)
{
	unsigned long int mul = 1;
	int numCheck, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			/* check if argument is a number */
			numCheck = isnumber(argv[i]);
			/* if isnumber returns 1 to numCheck,it is a number */
			if (numCheck == 1)
			{
				mul *= atoi(argv[i]);
			}
			/* if isnumber returns otherwise, it is not a number */
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
		printf("%d\n", mul);
	}
	/* if argument passed is not 3, print error */
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
 * isnumber - checks if an argument is a number
 * @str: argument string.
 *
 * Return: returns 1 if string is a number, returns 0, if otherwise.
 */

int isnumber(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
