#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
