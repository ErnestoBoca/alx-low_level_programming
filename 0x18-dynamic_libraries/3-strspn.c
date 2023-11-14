/**
 * _strspn - gets the length of a prefix substring.
 * @s: the we will look into
 * @accept: the accetable characters
 * Return:  the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, found, j;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			break;
		i++;
	}
	return (len);


}
