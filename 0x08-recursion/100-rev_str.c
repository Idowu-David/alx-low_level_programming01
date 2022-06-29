#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverses a string, to check for palindrome.
 * @s: string
 * Return: pointer to the reversed string.
 */

char *rev_string(char *s)
{
    int  i, len, j;
    char *rev;
    len = 0;
    while (s[len] != '\0')
        len++;
    rev  = malloc(len * sizeof(char) + 1);
    for (i = (len-1), j = 0; i >= 0; i--, j++)
    {
        rev[j] = s[i];
    }
    rev[j] = '\0';

    return rev;

}

