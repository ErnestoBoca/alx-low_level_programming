#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, size, j;
	char *str;

	size = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			size++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			size++;
	}
	size++;
	str = (char *)malloc(sizeof(char) * size);
	if (str != NULL)
	{
		j = 0;
		if (s1 != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
			{
				str[j] = s1[i];
				j++;
			}
		}
		if (s2 != NULL)
		{
			for (i = 0; s2[i] != '\0'; i++)
			{
				str[j] = s2[i];
				j++;
			}
		}
		str[j] = '\0';
		return (str);
	}
	return (0);
}
