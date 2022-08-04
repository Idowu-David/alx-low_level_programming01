#include "pid.h"

/**
 * main - A simple test of fork and wait call
 *
 * Return: Always 0, success.
 */
int main()
{
	pid_t pid, child_pid;
	
	printf("Before Fork\n");
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return 1;
	}
	pid = getpid();
	
	if(child_pid == 0)
	{
		sleep(10);
		printf("I am the child, my pid is %u\nWait for me, wait for me\n", pid);
	}
	else
	{
		wait(NULL);
		printf("I am still the father, my pid is %u, my child's pid is %u\nI waited for him", pid, child_pid);
	}
	return (0);
}
