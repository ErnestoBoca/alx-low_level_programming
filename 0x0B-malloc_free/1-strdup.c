#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the given string
 * Return: NULL if str = NULL
 * On success  returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int size, i;
	char chr, *arr;

	if (str == NULL)
		arr = 0;
	else
	{
		chr = *str;
		size = 0;
		while (chr >= '\0')
		{
			size++;
			chr = *(str + size);
		}
		arr = (char *)malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			for (i = 0; i <= size; i++)
			{
				*(arr + i) = *(str + i);
			}
		}
	}
	return (arr);
}



