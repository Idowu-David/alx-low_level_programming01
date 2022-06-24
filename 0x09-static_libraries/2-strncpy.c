#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: returns 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; src[i] != src[n]; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}