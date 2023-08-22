#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the pointer of the first variable
 * @b: pointer of the second variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
