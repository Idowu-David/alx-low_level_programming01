#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * A substring is the character found in another string.
 * @s: string
 * @accept: search string
 *
 * Return: length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				break;
			}
		}
	}
	return (length);
}
