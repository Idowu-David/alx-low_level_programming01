#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Returns 0, if successful.
 */

int main(int argc, char const **argv)
{
    int i = 0, used = 0, coin = 0;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
	    printf("Error\n");
	    return (1);
    }
    if (isInteger(argv[1]))
    {
	    i = atoi(argv[1]);
	    while (i > 0 && coin <= 4)
	    {
		    if (i >= coins[coin])
		    {
			    i -= coins[coin];
			    used++;
		    }
		    else
		    {
			    coin++;
		    }
	    }
    }
    printf("%i\n", used);
    return (0);
}

/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int isInteger(const char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
