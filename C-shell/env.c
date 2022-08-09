#include "pid.h"

int main(int ac, char **av)
{
    char *env;
    (void)ac;
    env = getenv(av[1]);

    printf("%s\n", env);
    return (0);
}