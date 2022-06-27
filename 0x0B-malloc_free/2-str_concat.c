#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string.
 *
 * Return: returns the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int a, i, j, k, n1, n2;
	char *str;

	n1 = 0;
	n2 = 0;
	while (s1[n1] != '\0')
		n1++;
	while (s2[n2] != '\0')
		n2++;
	j = n1 + n2;
	str = (char *)malloc(j * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
	{
		str[i] = s1[i];
	}
	for (a = 0, k = n1; s2[a] != '\0'; k++, a++)
	{
		str[k] = s2[a];
	}
	str[k] = '\0';
	return (str);
}
