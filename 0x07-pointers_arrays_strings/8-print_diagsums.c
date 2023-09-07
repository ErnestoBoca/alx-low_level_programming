#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals 
 * of a square matrix of integers.
 * @a: the matrix
 * @size: the size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, prin, sec;

	prin = 0;
	sec = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				prin += a[i][j];
			if (i + j == size)
				sec += a[i][j];
		}
	}
	printf("%d, %d\n", prin, sec);
}

