#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: returns 0, if success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
}
