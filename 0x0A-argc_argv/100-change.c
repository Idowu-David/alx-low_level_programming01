#include "main.h"

/**
 * main - prints the minimum number of coin
 * to make a change for an amount of money
 * @ac: argument count
 * @av: arument vector
 *
 * Return: 0, if number passed as argument is negative.
 * 1, if the number of arguments passed
 * to the program is not exactly 1.
 */
int main(int ac, char **av)
{
	int check, num, cent;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	check = isInteger(av[1]);
	/* if argument contains only integers */
	if (check == 1)
	{
		/* convert argument(string) to integer */
		num = atoi(av[1]);
		/* get number of coins for a change */
		cent = change(num);
		printf("%d\n", cent);
	}
	else
		printf("%d\n", 0);
	return (0);
}

/**
 * isInteger - checks if an argument passed is an integer
 * @num: string argument to check.
 *
 * Return: returns 1, if argument contains only integers.
 * else, returns 0.
 */
int isInteger(const char *num)
{
	int i, len;

	len = strlen(num);
	for (i = 0; i < len; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * change - gets the number of coin to make a change
 * @num: amount of money to check for change.
 *
 * Return: the number of coin to make the change.
 */
int change(int num)
{
	int div, index, count;
	int coin[5] = {25, 10, 5, 2, 1};

	count = index = 0;
	while (num != 0)
	{
		if (num >= coin[index])
		{
			div = num / coin[index];
			num %= coin[index];
			count += div;
		}
		else
			index++;
	}
	return (count);
}
