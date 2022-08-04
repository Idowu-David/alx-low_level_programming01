#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints PID
 *
 * Return: Always 0
 */
int main()
{
	pid_t pid;

	pid = getpid();
	printf("%u\n", pid);
	return (0);
}
