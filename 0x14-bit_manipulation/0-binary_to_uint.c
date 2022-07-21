#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of binary number.
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int int_check, lastDig, binary, power;

	decimal = 0;
	power = 1;
	if (b != NULL)
	{
		int_check = binary_int_check(b);
		if (int_check == 0)
			return (0);
		binary = atoi(b);
		while (binary != 0)
		{
			lastDig = binary % 10;
			decimal = decimal + (lastDig * power);
			power *= 2;
			binary /= 10;
		}
		return (decimal);
	}
	return (0);
}

/**
 * binary_int_check - checks if a string is made of only 1's and 0's
 * @str: string to be checked.
 * Return: returns 0, if string contains a non-integer
 * or number greater than 0 and 1
 * returns 1 if string is made of only 0's and 1's
 */

int binary_int_check(const char *str)
{
	int len = strlen(str);
	int index;

	for (index = 0; index < len; index++)
	{
		if (str[index] < '0' || str[index] > '1')
			return (0);
	}
	return (1);
}
