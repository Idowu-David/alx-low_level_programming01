#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int i, j, a, len1, len2, sum;
	char *str;
	char *null = "";
	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s2 == null;
	len1 = strlen(s1);
	len2 = strlen(s2);
	/* get the length of the two strings */
	sum = len1 + len2;
	/* allocate memory space of (sum) to the pointer */
	str = malloc(sum * sizeof(char));
	/* Check if memory is successfully allocated */
	if (str == NULL)
		return NULL;
	/* Copy s1 into str */
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	str[i] = '\0';
	/* check if the specified byte is greater than the lenght of s2 */
	if (n >= len2)
	{
		/* copy all the strings in s2 into str */
		for (j = len1, a = 0; s2[a] != '\0'; j++, a++)
		{
			str[j] = s2[a];
		}
		str[j] = '\0';
	}
	/* if the specified string is less than lenght of s2 */
	else if (n < len2)
	{
		/* copy the specified number of bytes from s2 */
		for (j = len1, a = 0; s2[a] != s2[n]; j++, a++)
		{
			str[j] = s2[a];
		}
		str[j] = '\0';
	}
	return (str);
}
