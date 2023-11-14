#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string.
 * @dest: the destination pointer
 * @src: the src pointer
 * @n: the number of bytes that will be copied from src
 * Return: the dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, chr;

	i = 0;
	chr = src[i];
	while (i < n)
	{
		if (chr != '\0')
		{
			dest[i] = src[i];
			i++;
			chr = src[i];
		} else
		{
			dest[i] = 0;
			i++;
		}

	}
	return (dest);
}
