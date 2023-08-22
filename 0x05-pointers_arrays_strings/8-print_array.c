#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: the pointer of the array
 * @n: the lenght of the array
 * Return: nothinh
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
