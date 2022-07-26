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
	int len, count, indexA, indexB, flag, index;

	len = strlen(needle);
	for (indexA = 0; needle[indexA] != '\0'; indexA++)
	{
		for (indexB = 0; haystack[indexB] != '\0'; indexB++)
		{
			if (needle[indexA] == haystack[indexB])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	flag = indexB;
	index = 0;
	while (needle[index] != '\0' && needle[index] == haystack[flag])
	{
		count++;
		index++;
		flag++;
	}
	if (count == len)
		return (&haystack[indexB]);
	return (NULL);
}
