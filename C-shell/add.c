#include "pid.h"

int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	printf("%p\n", *env);
	return (0);
}
