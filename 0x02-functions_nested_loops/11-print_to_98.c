#include <stdio.h>
/**
 * print_to_98 - prints number from n to 98.
 * @n: starting point of number.
 *
 * Return: Returns 0, if success.
 */
void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num <= 97)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num >= 97)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
}
