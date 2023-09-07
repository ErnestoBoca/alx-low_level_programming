#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to be allocated
 * Return: a void pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
