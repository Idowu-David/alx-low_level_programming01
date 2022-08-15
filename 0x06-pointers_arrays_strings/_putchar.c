#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: character to print
 *
 * Return: Returns 0.
 */
 int _putchar(char c)
 {
    return (write(1, &c, 1));
 }