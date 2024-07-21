#include "search_algos.h"

/**
 * print_array - prints the elemnts of array from start to end
 * @array: the array in case
 * @start: the first index
 * @end: the last index
 * Return: nothing
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == start)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}


/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mean;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mean = (left + right) / 2;
		if (value == array[mean])
			return (mean);
		else if (value < array[mean])
			right = mean - 1;
		else
			left = mean + 1;
	}

	return (-1);
}
