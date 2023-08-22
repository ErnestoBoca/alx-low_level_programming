#include "main.h"
/**
 *rev_string - reverses a string.
 *@s: pointer to the string that will be reversed
 *Return: nothing
 */
void rev_string(char *s)
{
	int i, chr, j, aux;

	chr = *s;
	i = 0;
	while (chr != '\0')
	{
		i++;
		chr = s[i];
	}
	j = 0;
	i--;

	while (i > j)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
		i--;
		j++;
	}
}
