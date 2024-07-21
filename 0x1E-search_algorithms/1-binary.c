#include "search_algos.h"

/**
 * print_indexes - prints the indexes from start to end
 * @start: the first index
 * @end: the last index
 * Return: nothing
 */
void print_indexes(size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == start)
			printf("%lu", i);
		else
			printf(", %lu", i);
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

	print_indexes(left, right);
	while (left < right)
	{
		mean = (left + right) / 2;
		if (value == array[mean])
			return (mean);
		else if (value < array[mean])
			right = mean - 1;
		else
			left = mean + 1;

		 print_indexes(left, right);

	}

	return (-1);
}
