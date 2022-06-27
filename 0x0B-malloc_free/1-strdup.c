#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string.
 * @str: string
 *
 * Return: returns a pointer to the string.
 * if str = NULL, returns NULL.
 */

char *_strdup(char *str)
{
	char *ch;
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;
	ch = (char *)malloc(len * sizeof(char));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ch[i] = str[i];
	}
	ch[i] = '\0';
	return (ch);
}
