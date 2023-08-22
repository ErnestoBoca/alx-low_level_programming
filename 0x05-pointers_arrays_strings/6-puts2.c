#include "main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to the string that will be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int i, chr;

	i = 0;
	chr = *str;
	while (chr != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
		chr = *(str + i);
	}
	_putchar('\n');
}
