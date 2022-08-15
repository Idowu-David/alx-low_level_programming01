#include "main.h"


int _putchar(char c);

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * No return
 */


void print_number(int n)
{
	unsigned int num, rem, div = 1;
	int clone;

	clone = n;
	num = 0;
	if (clone != 0)
	{
		while (clone != 0)
		{
			clone = clone / 10;
			num++;
		}
		num--;
		while (num != 0)
		{
			div *= 10;
			num--;
		}
	}
	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n != 0)
	{
		rem = n % div;
		n /= div;
		_putchar(n + '0');
		n = rem;
		div /= 10;
	}
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(INT_MIN);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}