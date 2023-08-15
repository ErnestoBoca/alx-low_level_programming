#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @i: the integer that will be computed
 *
 * Return: the absolute value of a number
 */
int _abs(int i)
{
	if (i < 0)
		i = i * (-1);
	return (i);
}
