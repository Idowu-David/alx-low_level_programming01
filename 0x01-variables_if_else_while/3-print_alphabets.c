#include <stdio.h>
/**
 * main - prints the alphabets
 * first in lowercase, then in uppercase.
 *
 * Return: Returns 0, Success.
 */
int main(void)
{
	int ch, CH; /* ch, variable for lowercase alphabet,*/
	/* CH, variable for uppercase alphabet.*/
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (CH = 65; CH <= 90; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
