#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "First, solve the problem. Then write the code";
    char *f;

    f = _strchr(s, 'a');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
