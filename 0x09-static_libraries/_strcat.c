#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int n1, n2, i;

	n1 = 0;
	n2 = 0;
	while (dest[n1] != '\0')
		n1++;
	while (src[n2] != '\0')
		n2++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n1] = src[i];
		n1++;
	}
	dest[n1] = '\0';
	return (dest);
}
