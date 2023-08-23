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
	int i, chr, len1, len2;

	i = 0;
	chr = s1[i];
	while (chr != '\0')
	{
		i++;
		chr = s1[i];
	}
	len1 = i;
	i = 0;
	chr = s2[i];
	while (chr != '\0')
	{
		i++;
		chr = s2[i];
	}
	len2 = i;
	if (len1 < len2)
		return (-15);
	else if (len1 > len2)
		return (15);
	else
		return (0);
}
