/**
 * _strchr - locates a character in a string.
 * @s: The string
 * @c: the character to be located
 * Return:  pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	char *p, chr;
	int i;

	i = 0;
	chr = s[i];
	p = 0;
	while (chr >= '\0')
	{
		if (chr == c)
		{
			p = &s[i];
			break;
		}
		i++;
		chr = s[i];
	}
	return (p);
}
