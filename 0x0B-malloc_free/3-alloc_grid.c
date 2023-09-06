#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to a 2 dimensional array of integers.
 * return NULL on failure
 * If width or height is 0 or negative, return NULL
 * Each element of the grid should be initialized to 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	matrix = 0;

	if (width > 0 &&  height > 0)
	{
		matrix = malloc(sizeof(int *) * height);
		if (matrix != NULL)
		{
			for (i = 0; i < height; i++)
			{
				matrix[i] = malloc(sizeof(int) * width);
				if (matrix[i] == NULL)
				{
					for (j = 0; j <= i; j++)
					{
						free(matrix[j]);
					}
					free(matrix);
					return (0);
				}
				for (j = 0; j < width; j++)
				{
					matrix[i][j] = 0;
				}
			}
		}
	}

	return (matrix);
}

