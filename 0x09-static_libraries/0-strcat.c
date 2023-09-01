#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, chr, j;

	i = 0;
	chr = dest[0];
	while (chr != '\0')
	{
		i++;
		chr = dest[i];
	}

	chr = src[0];
	j = 0;
	while (chr != '\0')
	{
		dest[i] = chr;
		i++;
		j++;
		chr = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
