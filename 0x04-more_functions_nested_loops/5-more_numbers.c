#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, tens, units;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			units = j % 10;
			if (j > 9)
			{
				tens = j / 10;
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
