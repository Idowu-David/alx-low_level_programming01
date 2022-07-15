#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses the string passed as argument
 * @str: string.
 *
 * Return: returns 1, if string is palindrome, 0, if otherwise.
 * Description: This program reverses a string and compares the reversed
 * string with the original. If no difference is found in the string,
 * String can be said to be palindrome.
 */

int rev_string(char str[])
{
	int length, index, iterator, flag = 0;
	length = strlen(str);
	
	char rev[length];
	index = 0;
	length--;
	while (length >= 0)
	{
		rev[index] = str[length];
		length--;
		index++;
	}
	rev[index] = '\0';

	for (iterator = 0; str[iterator] != '\0'; iterator++)
	{
		if (str[iterator] != rev[iterator])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (0);
	return (1);
}

/**
 * is_palindrome - checks if a string is palindrome.
 * @s: string
 *
 * Return: returns 1, if string is palindrome, returns 0 if otherwise.
 */

int is_palindrome(char *s)
{
	int value;

	value = rev_string(s);
	return (value);
}
