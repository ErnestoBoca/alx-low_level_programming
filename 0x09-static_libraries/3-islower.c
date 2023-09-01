#include "main.h"

/**
 *_islower - checks if a characyer is wether lower or uppercase
 *@c: The character to check
 *
 * Return: 1 if c is lowercase
 * otherwise: returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
