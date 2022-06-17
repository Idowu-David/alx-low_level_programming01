#include "main.h"

/**
 * leet - encodes a string
 * @s: string
 *
 * Return: returns 0, success.
 */
char *leet(char *s)
{
	char ch1[] = "aeotl";
	char ch2[] = "AEOTL";
	char num[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ch1[j] || s[i] == ch2[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
