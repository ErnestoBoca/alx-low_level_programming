#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes that will be concatened from src
 * Return:  a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, chr;

	i = 0;
	chr = dest[i];
	while (chr != '\0')
	{
		i++;
		chr = dest[i];
	}

	j = 0;
	chr = src[j];
	while (j < n && chr != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
		chr = src[j];
	}
	return (dest);
}
