#include "pid.h"

/**
 * main - executes a command
 *
 * Return: Always 0.
 */
int main()
{
	pid_t child_pid, pid;
	int process, ret;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (process = 0; process < 2; process++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			printf("\nI am the %d child\n", (process + 1));
			ret = execve(argv[0], argv, NULL);
			if (ret == -1)
			{
				perror("Error: ");
				return (1);
			}
			exit(1);
		}
		else if (child_pid == -1)
			perror("Error\n");
	}
	while((pid = wait(NULL)) > 0);
	return (0);
}

