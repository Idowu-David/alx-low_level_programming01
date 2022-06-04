#include <stdio.h>
/**
 * main - prints all possible combinations
 * of three digits.
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	/* define three variables to use as the digits*/
	int num1, num2, num3;
	/* loop through the first digits */
	for (num1 = 48; num1 <= 55; num1++)
	{
		/* loop through the second digit */
		for (num2 = 49; num2 <= 56; num2++)
		{
			/* loop through the third digit */
			for (num3 = 50; num3 <= 57; num3++)
			{
				/* condition, if none of the numbers are equal*/
				if (num1 != num2 || num1 != num3 || num2 != num3)
				{
					/*conditon, if num3 is the lease, continue, if true.*/
					if (num1 > num2 || num2 > num3)
					{
						continue;
					}
					else if (num1 == num2 || num2 == num3)
					{
						continue;
					}
					/*if none of the conditions are met, print the digits*/
					else
					{
						putchar(num1);/*print the first digit*/
						putchar(num2);/*print the second digit*/
						putchar(num3);/*print the third digit*/
						if (num1 != 55)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
