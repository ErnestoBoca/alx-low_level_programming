#include "main.h"

/**
 * print_alphabet_x10(void) - prints the alphabet
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
