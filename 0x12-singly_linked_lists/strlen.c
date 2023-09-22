#include "main.h"
/**
 * _strlen - calculates the length of a string.
 * @str: the pointer to the string
 * Return: the length of a string.
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
