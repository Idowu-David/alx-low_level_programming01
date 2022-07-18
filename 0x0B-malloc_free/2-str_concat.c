#include <stdlib.h>
<<<<<<< HEAD
#include "main.h"
=======
>>>>>>> 50442c17a3b93646bc7673b78791b0a976653852
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
<<<<<<< HEAD
 * Return: returns a poiner to a newly allocated space in memory
 * containing the contents of s1 and s2 concatenated, if success.
 * Returns NULL if the function fails.
=======
 * Return: returns a pointer to a newly allocated string containing contents
 * of s1 and s2.
 * returns NULL, if the function fails.
>>>>>>> 50442c17a3b93646bc7673b78791b0a976653852
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
<<<<<<< HEAD
	{
		str[index] = s1[index];
	}
	for (index = lenA, iterator = 0; s2[iterator] != '\0'; index++, iterator++)
	{
		str[index] = s2[iterator];
	}
=======
		str[index] = s1[index];
	for (index = lenA, iterator = 0; s2[iterator] != '\0'; index++, iterator++)
		str[index] = s2[iterator];
>>>>>>> 50442c17a3b93646bc7673b78791b0a976653852
	str[index] = '\0';
	return (str);
}
