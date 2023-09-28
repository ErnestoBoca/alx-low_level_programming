/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: the given number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	unsigned int num_bites = sizeof(unsigned long int) * 8;

	if (index >= num_bites)
		return (-1);
	mask = ~mask;
	*n = mask & *n;

	return (1);
}
