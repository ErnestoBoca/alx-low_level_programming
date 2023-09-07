#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: the minimum value
 * @max: the maximum  value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *ptr, gap;

	if (min > max)
		return (NULL);
	gap = max - min;
	ptr = malloc(sizeof(int) * (gap + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= gap; i++)
		ptr[i] = min + i;
	return (ptr);
}
