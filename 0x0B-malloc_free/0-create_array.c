#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the character that will be initialized
 * Return: an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}

	return (arr);
}

