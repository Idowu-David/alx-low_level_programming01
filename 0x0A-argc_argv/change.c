#include "main.h"

int main(int ac, char **av)
{
    int check, num, cent;
    if (ac != 2)
    {
        printf("Error\n");
        return (1);
    }
    check = isinteger(av[1]);
    if (check == 1)
    {
        num = atoi(av[1]);
        cent = change(num);
        printf(">>> %d\n", cent);
    }
    else
        printf("%d\n", 0);
    return (0);
}

int isinteger(const char *num)
{
    int i, len;
    len = strlen(num);

    for (i = 0; i < len; i++)
    {
        if (num[i] < '0' || num[i] > '9')
            return (0);
    }
    return (1);
}

int change(int num)
{
    int check = 1, div, rem, index = 0, count = 0, flag = 0;
    int coin[5] = {25, 10, 5, 2, 1};
    while (num != 0)
    {
        if (num >= coin[index])
        {
            div = num / coin[index];
            num %= coin[index];

            count += div;            
        }
        else
            index++;
    }
    return (count);
}