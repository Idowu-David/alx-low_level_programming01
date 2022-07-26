#include "main.h"

/**
 * _strchr - locates the first occurence of a character in a string.
 * @s: string
 * @c: character
 *
 * Return: pointer to the character in string.
 */

char *_strchr(char *s, char c)
{
	int index;

	if (s == NULL)
		return (NULL);
	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			break;
	}
	return (&s[index]);
}
