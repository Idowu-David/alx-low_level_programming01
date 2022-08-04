#include "pid.h"

/**
 * main - simple shell with fork, wait and execve
 *
 * Return: 0
 */
int main()
{
	pid_t child_pid, pid;
	int status, index;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (index = 0; index < 5; index++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error");
			return (1);
		}
		if (child_pid == 0)
		{
			sleep(2);
			status = execve(argv[0], argv, NULL);
			if (status == -1)
			{
				perror("Error");
				return (1);
			}
		}
	}
	while((pid = wait(NULL) > 0));
	return (0);
}

