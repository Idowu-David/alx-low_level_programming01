#include <stdio.h>
/**
 * main - Prints the digits of base 10 using putchar.
 *
 * Return: Returns 0, success.
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
