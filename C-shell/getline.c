#include "pid.h"

/**
 * main - prints a user command on the next line
 *
 * Return: Always 0, success.
 */

int main(void)
{
	char *buf = NULL;
	size_t n;
	ssize_t count = 0;

	while (count != -1)
	{
		printf("$ ")
		count = getline(&buf, &n, stdin);
		printf("%s", buf);
	}
	free(buf);
	return (0);
}
