#include "main.h"
#include <stdio.h>
#include <unistd.h>

void print_rev(char *s)
{
	int i, j;
	while (s[i] != '\0')
		i++;
	for (j = i - 1; i <= 0; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
