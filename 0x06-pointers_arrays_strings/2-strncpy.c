#include "main.h"
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
	while (i < n - 1)
	{
		i++;
		if (chr != '\0')
		{
			dest[i] = src[i];
			chr = src[i];
		}
		if (chr == '\0')
			dest[i] = 0;
	}
	return (dest);
}
