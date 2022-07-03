#include "main.h"

/**
 * print_times_table - prints n times table.
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
        int i, j;

        if (n > 15 || n < 0)
        {
                _putchar('\0');
        }
        else
        {
                for (i = 0; i < (n + 1); i++)
                {
                        for (j = 0; j < (n + 1); j++)
                        {
                                _putchar((i * j) + '0');
                                if (j < n)
                                {
                                        _putchar(',');
                                        _putchar('\t');
                                }
                                _putchar('\n');
                        }
                }
        }
}
