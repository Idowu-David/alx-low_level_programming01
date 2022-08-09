#include "pid.h"

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
extern char **environ;
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	printf("Address of env: %p\n", *env);
	printf("Address of environ: %p\n", *environ);
	return (0);
}
