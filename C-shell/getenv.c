#include "pid.h"

/**
loop through the user input, get the first char.
loop through the environ , if char is found, check the next element if it
is same as the next char of user input. 
if same, return a pointer to the beginning of the string in environ
/
_getenv - gets an environment variable

Return: a pointer to the variable.
*/

extern char **environ;
char *_getenv(const char *name)
{
    int i, j, status;

    for (i = 0; environ[i] != NULL; i++)
    {
        status = 1;
        for (j = 0; environ[i][j] != '='; j++)
        {
            if (name[j] != environ[i][j])
            {
                status = 0;
                break;
            }
        }
        if (status)
            return (&environ[i][j + 1]);
    }
return (NULL);
}




/*int main(int ac, char **av)
{
    char *getEnv;
    
    if (ac < 2 || ac > 3)
    {
        printf("Usage %s <environment variable>...\n", av[0]);
        return (1);
    }
    getEnv = _getenv(av[1]);
    if (getEnv == NULL)
        {
            printf("null\n");
            return (1);
        }
    printf("%s\n", getEnv);
    return (0);
}
*/