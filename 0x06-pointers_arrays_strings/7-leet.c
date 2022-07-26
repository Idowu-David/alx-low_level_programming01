#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: returns 0, success.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 */

char *leet(char *str)
{
	char *upper, *lowr, *num;
	int len;
	int index, ind;

	upper = "AEOTL";
	lowr = "aeotl";
	num = "43071";
	len = strlen(str);
	for (index = 0; index < 5; index++)
	{
		for (ind = 0; ind < len; ind++)
		{
			if (str[ind] == upper[index] || str[ind] == lowr[index])
				str[ind] = num[index];
		}
		
	}
	return (str);
}
