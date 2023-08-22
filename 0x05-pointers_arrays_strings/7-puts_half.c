#include "main.h"

/**
 *puts_half -  prints half of a string, followed by a new line.
 *prints the second half of the string
 *@str: pointer to the string that will br printed
 *Return: nothing
 */
void puts_half(char *str)
{
	int len, i, chr;

	len = 0;
	chr = *str;
	while (chr != '\0')
	{
		len++;
		chr = *(str + len);
	}

	i = len / 2;
	if (len % 2 == 1)
		i++;
	while (i <= len - 1)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}


