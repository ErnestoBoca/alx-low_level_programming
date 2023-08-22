#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the destination pointer
 * @src: the source pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, chr;

	i = 0;
	chr = *src;
	while (chr !=  '\0')
	{
		dest[i] = chr;
		i++;
		chr = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}
