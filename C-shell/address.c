#include "pid.h"

/**
 * main - prints the address
 * 
 * Return: Always 0.

 prints the address of env (the third parameter of the main function) 
 and environ (the global variable)
 */
 extern char **environ;

 int main(int ac, char **av, char **env)
 {
    (void)ac;
    (void)av;

    printf("Address of env: %p\n", *env);
    printf("Address of environ: %p\n", *environ);
    printf("Length of environ: %d\n", _strlen(*environ));
    return (0);
 }

int _strlen(const char *str)
{
    int index = 0;

    while (str[index])
    {
        index++;
    }
    return (index);
}