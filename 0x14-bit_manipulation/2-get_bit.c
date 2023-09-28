/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get
 * @n: the number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	unsigned int num_bits = sizeof(unsigned long int) * 8;
	int bit;

	if (index >= num_bits)
		return (-1);

	if (n & mask)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
