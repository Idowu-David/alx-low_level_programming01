#include "pid.h"

/**
 * main - super simple shell
 *
 * Return: Always 0
 */
int main()
{
	int token_count, index, status = 0;
	pid_t child_pid;
	ssize_t count = 0;
	size_t n;
	char *copy, *token, *delim = " \n", *buffer = NULL, **argv;

	do
	{
		/* get user input using getline */
		printf("$ ");
		count = getline(&buffer, &n, stdin);
		if (count == -1)
		{
			perror("Error");
			return (1);
		}

		/* duplicate the value of buffer */
		copy = malloc(sizeof(char) * strlen(buffer));
		if (copy == NULL)
			return (1);
		strcpy(copy, buffer);

		/* tokenize the user input */
		token = strtok(buffer, delim);
		token_count = 1;
		while(token)
		{
			token = strtok(NULL, delim);
			token_count++;
		}

		/* allocate space for the number of token */
		argv = malloc(sizeof(char *) * token_count);
		if (argv == NULL)
			return (1);
		
		/* split buffer(copy) into an array of strings */
		token = strtok(copy, delim);
		index = 0;
		while(token)
		{
			argv[index] = malloc(sizeof(char) * strlen(token));
			if (argv[index] == NULL)
			{
				free(argv);
				return (1);
			}
			/* copy the content of token into argv array */
			strcpy(argv[index], token);
			index++;

			token = strtok(NULL, delim);
		}
		argv[index] = NULL;

		/* Execution */
		child_pid = fork();
		if (child_pid == 0)
		{
			status = execve(argv[0], argv, NULL);
			if (status == -1)
			{
				perror("Error");
				return (1);
			}
		}
		wait(NULL);
	}
	while(count != -1);
	free(buffer);
	free(copy);
	for (index = 0; argv[index] != NULL; index++)
		free(argv[index]);
	free(argv);
		
	return (0);
}
