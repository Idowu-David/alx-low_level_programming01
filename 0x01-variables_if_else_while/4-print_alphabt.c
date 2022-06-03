#include <stdio.h>
/**
 * main - Prints the letters of the alphabet
 * without q and e
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
