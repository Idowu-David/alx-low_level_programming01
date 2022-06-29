#include "main.h"

/**
 * check_pal - checks if the parameter strings are same or not.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: returns 0, if strings are different,
 * returns 1 if strings are same.
 */
int check_pal(char *s1, char *s2)
{
	/* s1 is the main string, s2 is the reversed string */
	/* if a character is different, return 0 */
	if (*s1 != *s2)
		return (0);
	/* if string reaches end, strings are same */
	if (*s1 == '\0')
		return (1);
	/* call function again */
	return check_pal((s1 + 1), (s2 + 1));
}

/**
 * is_palindrome - checks if a string is palindrome or not.
 * @s: string.
 *
 * Return: returns 1, if palindrome, return 0, if not palindrome.
 */

int is_palindrome(char *s)
{
	/* call rev_string func for the reversed string*/
	char *str = rev_string(s);
	/* call check_pal func for its return value */
	int pal = check_pal(s, str);

	if (pal == 1)
		return (1);
	return (0);
}
