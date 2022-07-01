#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string (dest)
 * @s2: string (source)
 * @n: number of bytes of string to copy.
 *
 * Return: returns the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i,len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	sum = len1 + len2;
	str = malloc(sum * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	/* copy s1 into str */
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	/*copy all the strings in s2 into str */
	for (; i < (len1 + n); i++)
	{
		str[i] = s2[i - len1];
	}
	str[i] = '\0';
	return (str);
}
