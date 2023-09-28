#include "main.h"
#include <stdio.h>
/**
 * power - calculates the power of base on expo
 * @base: the base element
 * @expo: the exponential parte
 * Return: the power of a number
 */
unsigned int power(unsigned int base, int expo)
{
	unsigned int p = 1;
	int i;

	if (expo == 0)
		return (1);
	for (i = 0; i < expo; i++)
		p *= base;
	return (p);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0, size = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
		size++;
	}

	size--;
	i = 0;
	while (b[i] != '\0')
	{
		number += (b[i] - '0') * power(2, size);
		size--;
		i++;
	}




	return (number);
}
