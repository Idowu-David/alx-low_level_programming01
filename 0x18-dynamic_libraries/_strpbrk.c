#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to check out for its bytes in another string
 * @accept: string which its bytes are to be checked
 *
 * Return: returns a pointer to the byte in s that matches one
 * of the bytes in accept, or
 * NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int indexA, indexB, flag;

	flag = 0;
	for (indexA = 0; s[indexA] != '\0'; indexA++)
	{
		for (indexB = 0; accept[indexB] != '\0'; indexB++)
		{
			if (s[indexA] == accept[indexB])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 0)
		return (NULL);
	return (&s[indexA]);
}
