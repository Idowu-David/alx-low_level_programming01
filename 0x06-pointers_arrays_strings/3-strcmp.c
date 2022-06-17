#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Returns the difference between the strings.
 */
int _strcmp(char *s1, char *s2)
{
	int n1, n2, i;

	while (s1[n1] != '\0')
	{
		n1++;
	}
	while (s2[n2] != '\0')
	{
		n2++;
	}
	if (n1 == n2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[i] == s2[i])
			{
				return 0;
			}
		}
	}
	else if (n1 > n2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	else if (n1 < n2)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
