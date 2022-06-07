#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to be printed
 * 
 * Return: Returns 0, if success.
 */
int print_last_digit(int n)
{
    int lastDig;
    lastDig = n % 10;
    _putchar(lastDig + '0');
    return (0);
}