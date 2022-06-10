#include <stdio.h>
/**
 * main - fizzbuzz function
 * prints fizzbuzz, if a number is a multiple of 3 and 5
 * prints fuzz, if a number is a multiple of 3
 * prints buzz, if a number is a multiple of 5.
 *
 * Return: Returns 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num > 1 && num <= 99)
		{
			printf(" ");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
	}
	return (0);
}
