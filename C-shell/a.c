#include "pid.h"

int main()
{
	char *av[] = {"/bin/ls", NULL};
	int status;
	char *clone = av[0];
	printf("Clone is %s\n", clone);
	status = execve(clone, av, NULL);
	if (status == -1)
	{
		perror("Error:");
		return (0);
	}
	return (0);
}
