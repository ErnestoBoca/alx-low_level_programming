/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the first number
 * @m: the secund number
 * Return:  the number of bits you would need to
 * flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}

	return (count);
}
