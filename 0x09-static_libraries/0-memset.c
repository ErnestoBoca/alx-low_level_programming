/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area pointed to
 * @b: the constant byte b
 * @n: the first n bytes of the memory area pointed to by s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
