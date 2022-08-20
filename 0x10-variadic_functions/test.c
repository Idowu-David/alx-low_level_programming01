#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list arg;
    char *str;
    int index;

    va_start(arg, n);
    for (index = 0; index < n; index++)
    {
        str = va_arg(arg, char*);
        if (separator != NULL)
            {
                if (index < n - 1)
                    printf("%s%s ", str, separator);
                else
                    printf("%s", str);
            }
        else
            printf("%s ", str);
    }
    printf("\n");
}

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}