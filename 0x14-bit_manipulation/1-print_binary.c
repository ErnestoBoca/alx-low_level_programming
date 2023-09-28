#include "main.h"
/**
 * power - calculates the power of base on expo
 * @base: the base element
 * @expo: the exponential parte
 * Return: the power of a number
 */
int power(int base, int expo)
{
	int p = 1;
	int i;

	if (expo == 0)
		return (1);
	for (i = 0; i < expo; i++)
		p *= base;
	return (p);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int index = 0, num = n;

	while (power(2, index) <= num)
		index++;
	if (num > 0)
		index--;
	while (index >= 0)
	{
		if (num - power(2, index) >= 0)
		{
			_putchar('1');
			num -= power(2, index);
		} else
			_putchar('0');
		index--;
	}
}

