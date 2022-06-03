#include <stdio.h>
/**
 * main - prints the numbers of
 * base 16 using putchar.
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	int numX; /* variable for the base 16 */

for (numX = 48; numX <= 102; numX++)
	{
		if (numX <= 57 || numX >= 97)
		{
			putchar(numX);
		}
	}
	putchar('\n');
	return (0);
}
