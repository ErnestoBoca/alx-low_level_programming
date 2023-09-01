/**
 * _strpbrk - searches for any of a set of bytes
 * @s: the string
 * @accept: the acceptable characters
 * Return: a pointer to the byte in s
 * That matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, found, j;

	found = 0;
	i = 0;
	while (s[i] >= '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				found = 1;
				break;
			}
			j++;
		}
		if (found == 1)
			break;
		i++;
	}
	return (p);
}
