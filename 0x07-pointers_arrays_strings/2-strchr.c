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
	int index, flag;

	flag = 0;
	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return ('\0');
	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (&s[index]);
	return (NULL);
}
