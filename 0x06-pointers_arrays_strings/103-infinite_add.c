#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: pointer to the first number
 * @n2: pointer to the second number
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: Returns a pointer to the result
 * - If the result cannot be stored in r, the function must return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int num1, num2;
    (void *)r;
    (void)size_r;
    /* convert n1 and n2 to integers */
    num1 = atoi(n1);
    num2 = atoi(n2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}