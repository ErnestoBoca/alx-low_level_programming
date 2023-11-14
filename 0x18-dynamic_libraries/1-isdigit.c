#include "main.h"

/**
 * _isdigit - checks if is a digit or not
 * @c: the value that will be checked
 *
 * Return: 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
