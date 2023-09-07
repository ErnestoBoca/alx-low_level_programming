#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes that will be concatenated from s2
 * Return: a pointer that points to a newly allocated space in memory,
 *  which contains s1, followed by the first n bytes of s2, and null terminated
 *  If the function fails, it should return NULL
 *  If n is greater or equal to the length of s2 then use the entire string s2
 *  if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *ptr;

	l1 = 0;
	l2 = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			l1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			l2++;
	}
	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < l1; i++)
	{
		ptr[j] = s1[i];
		j++;
	}
	if (n < l2)
	{
		l2 = n;
	}

	for (i = 0; i < l2; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}


