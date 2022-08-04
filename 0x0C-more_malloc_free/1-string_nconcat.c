#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size of bytes to be copied from s2
 *
 * Return: a pointer to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int lenA, lenB, index, indexB;
	char *ptr;
	
	lenA = strlen(s1);
	lenB = strlen(s2);
	ptr = malloc(sizeof(char) * ((lenA + lenB) + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= lenB)
		n = lenB;
	for (index = 0; s1[index] != '\0'; index++)
		ptr[index] = s1[index];
	for (index = 0, indexB = lenA; s2[index] != s2[n]; index++, indexB++)
		ptr[indexB] = s2[index];
	ptr[indexB] = '\0';
	return (ptr);
}
