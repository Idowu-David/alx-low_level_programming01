#include "pid.h"

/**
 * main - execve example 2
 *
 * Return: Always 0
 */
int main()
{
	int ret;
	char *argv[] = {"/bin/ls", "-la", NULL};
	printf("Before execve\n");
	ret = execve(argv[0], argv, NULL);
	if (ret == -1)
		perror("Error:\n");
	printf("After execve");
	return (0);
}	
