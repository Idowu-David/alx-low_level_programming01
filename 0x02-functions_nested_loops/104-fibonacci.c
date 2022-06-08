#include <stdio.h>

/**
 * main - prints fibonacci numbers
 *
 * Return: Returns 0,Success
 */
int main(void)
{
	unsigned long int i;
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int l = 1000000000;
	unsigned long int num11;
	unsigned long int num12;
	unsigned long int num21;
	unsigned long int num22;

	printf("%lu", num1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", num2);
		num2 += num1;
		num1 = num2 - num1;
	}
	num11 = (num1 / l);
	num12 = (num1 % l);
	num21 = (num2 / l);
	num22 = (num2 % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", num21 + (num22 / l));
		printf("%lu", num22 % l);
		num21 = num21 + num11;
		num11 = num21 - num11;
		num22 = num22 + num12;
		num12 = num22 - num12;
	}
	printf("\n");
	return (0);
}
