#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: the number wich sign will be printed
 *
 * Return: 1 and prints + if n is greater than zero
 * Or: 0 and prints 0 if n is zero
 * or: -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	} else if (n == 0)
	{
		_putchar('0');
		r = 0;
	} else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
