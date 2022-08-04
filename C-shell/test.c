#include "pid.h"

int main()
{
	char *argv[] = {"/bin/pwd", NULL};
	execve(argv[0], argv, NULL);
	return (0);
}
