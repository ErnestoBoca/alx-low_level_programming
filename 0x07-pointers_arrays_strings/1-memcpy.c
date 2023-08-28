/**
 * _memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes that will be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
