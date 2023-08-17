#include "main.h"

/**
 * _isupper - checks wheter a character is uppercase or not;
 * @c: the character that will be checked
 *
 * Return: 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
