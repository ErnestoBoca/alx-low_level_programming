#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer of the string that will be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, chr;

	chr = *s;
	i = 0;
	while (chr != '\0')
	{
		i++;
		chr = *(s + i);
	}
	_putchar('\0');
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
