#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to strings.
 *
 * Return: returns the capitalized string.
 */

char *cap_string(char *str)
{
	int len, sepLen, index, i; /* i means index2 */
	char *sep = " \t\n,;.!?\"(){}";

	len = strlen(str);
	sepLen = strlen(sep);
	/**
	 * Loop through the separator, another inner loop in the string,
	 * check if the separator is same as the index of the string
	 * if true, check the next index of the string
	 * if the character in the next index is not uppercase
	 * change to uppercase with 'str[index] + 32
	 * repeat the process until done.
	 */

	for (index = 0; index < sepLen; index++)
	{
		for (i = 0; i < len; i++)
		{
			if (str[i] == sep[index])
			{
				if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
						{
							str[i + 1] -= 32;
						}
			}
		}
	}
	return (str);
}
