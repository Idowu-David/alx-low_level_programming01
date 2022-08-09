#include "pid.h"

/**
print_path - prints each directory contained in the
environment variable path.

Return: void
*/

extern char **environ;
void print_path()
{
    char *env;
    int index;

    env = _getenv("PATH");
    if (env == NULL)
        return;
    
    for (index = 0; env[index] != '\0'; index++)
    {
        if (env[index] == ':')
        {
            index++;
            printf("\n");
        }
        printf("%c", env[index]);
    }
    printf("\n");
}

int main()
{
    print_path();
    return(0);
}
