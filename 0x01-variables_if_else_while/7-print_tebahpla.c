#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
