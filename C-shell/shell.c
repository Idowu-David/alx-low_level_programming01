#include "pid.h"

/**
 * main - super simple shell
 *
 * Return: Always 0
 */
int main()
{
	/*
	 * get the user's input using getline
	 * create a fork function that executes everytime a command is inputed
	 *
	 */
	int status = 0;
	pid_t child_pid;
	ssize_t count = 0;
	size_t n;
	char *av = NULL;
	while (count != -1)
	{
		printf("$ ");
		count = getline(&av, &n, stdin);
		if (count == -1)
		{
			perror("Error: ");
			return (1);
		}
		while(status != -1)
		{
			child_pid = fork();
			if (child_pid == -1)
			{
				perror("Error");
				return (1);
			}
			if (child_pid == 0)
			{
				status = execve(av, av, NULL);
				if (status == -1)
				{
					perror("Error: ");
					return(1);
				}	
			}
			wait(NULL);
		}
	}		
	return (0);
}
