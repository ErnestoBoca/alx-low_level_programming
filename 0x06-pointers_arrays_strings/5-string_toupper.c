/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 * Return: The String in uppercase
 */
char *string_toupper(char *s)
{
	int i, chr;

	i = 0;
	chr = s[i];
	while (chr != '\0')
	{
		if (chr >= 'a' && chr <= 'z')
			s[i] -= 32;
		i++;
		chr = s[i];
	}
	return (s);
}
