#include "pid.h"

extern char **environ;
void print_path()
{
    char *env = getenv("PATH");
    char *token;
    char *delim = ":";
    token = strtok(env, delim);
    while(token)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
}

int main()
{
    print_path();
    return (0);
}