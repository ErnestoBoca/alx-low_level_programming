/**
 * cap_string - capitalizes all words of a string.
 * @s: the string
 * Return: a capitazed string
 */
char *cap_string(char *s)
{
	int i, chr;

	i = 0;
	chr = s[i];
	if (chr >= 'a' && chr <= 'z')
		s[i] -= 32;
	while (chr != '\0')
	{
		if ((chr == ' ' || chr == '\t' || chr == '\n' || chr == ','
			 || chr == ';' || chr == '.' || chr == '?' || chr == '"'
			  || chr == '(' || chr == ')' || chr == '{'
			   || chr == '}') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
		i++;
		chr = s[i];
	}
	return (s);
}
