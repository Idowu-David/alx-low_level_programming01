#include "pid.h"

/**
 * main - fork example
 *
 * Return: Always 0
 */
int main()
{
	pid_t mypid;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	mypid = getpid();
	printf("My pid is %u\n", mypid);
	return (0);
}
