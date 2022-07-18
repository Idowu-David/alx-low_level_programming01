#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to a newly allocated string containing contents
 * of s1 and s2.
 * returns NULL, if the function fails.
 */

char *str_concat(char *s1, char *s2)
{
	int lenA, lenB, index, iterator;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenA = strlen(s1);
	lenB = strlen(s2);
	str = malloc((sizeof(char) * (lenA + lenB)) + 1);
	if (str == NULL)
		return (NULL);
	for (index = 0; s1[index] != '\0'; index++)
		str[index] = s1[index];
	for (index = lenA, iterator = 0; s2[iterator] != '\0'; index++, iterator++)
		str[index] = s2[iterator];
	str[index] = '\0';
	return (str);
}
