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
	int s_index, accept_index;
	unsigned int count = 0;

	if (s == NULL || accept == NULL)
		return (0);
	for (s_index = 0; s[s_index] != ' '; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
				count++;
		}
	}
	return (count);
}
