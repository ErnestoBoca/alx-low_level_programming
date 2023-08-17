#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: the number of times the character \ will be printed
 * If n is 0 or less, the function will  only print a \n
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != 0)
				_putchar(' ');
		}
		_putchar('\\');
		if (i != (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
