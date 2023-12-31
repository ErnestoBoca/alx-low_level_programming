#include <stdlib.h>
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: the array in case
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 && action != 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

