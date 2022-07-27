#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 *
 * The _strstr() function finds the first occurence of the substring needle
 * in the string haystack. The terminating null bytes ('\0') are not compared
 */

char *_strstr(char *haystack, char *needle)
{
	int len, count, indexA, indexB, i, j;
	char *hay, *n;

	count = 1;
	hay = haystack;
	n = needle;
	len = strlen(needle);
	if (haystack != NULL && needle != NULL)
	{
		for (indexA = 0; n[indexA] != '\0'; indexA++)
		{
			for (indexB = 0; hay[indexB] != '\0'; indexB++)
			{
				if (n[indexA] == hay[indexB])
				{
					i = indexA;
					j = indexB;
					while (n[i] != '\0' && n[i + 1] == hay[j + 1])
					{
						count++;
						i++;
						j++;
					}
					if (count == len)
						return (&hay[indexB]);
				}
			}
		}
	}
	return (NULL);
}
