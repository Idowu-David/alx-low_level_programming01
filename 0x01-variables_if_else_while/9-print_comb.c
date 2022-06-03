#include <stdio.h>
/**
 * main - prints all combinations of single-digit
 * number, separated by , and followed by a space.
 *
 * Return: Return 0, Success.
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
