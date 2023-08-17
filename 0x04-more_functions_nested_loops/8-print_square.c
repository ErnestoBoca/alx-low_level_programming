#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 * If size is 0 or less, the function will  print only a new line
 * Return: nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
