#include "main.h"

/**
 * rev_string - reverses string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len, index;
	char temp;

	len = strlen(s);
	for (index = 0; index < len / 2; index++)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
