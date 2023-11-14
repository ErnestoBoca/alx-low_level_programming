#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 * Return:  0, if the s1 and s2 are equal;
 * -15 value if s1 is less than s2;
 *  15 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
