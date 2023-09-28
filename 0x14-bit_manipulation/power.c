/**
 * power - calculates the power of base on expo
 * @base: the base element
 * @expo: the exponential parte
 * Return: the power of a number
 */
unsigned int power(unsigned int base, int expo)
{
	unsigned int p = 1;
	int i;

	if (expo == 0)
		return (1);
	for (i = 0; i < expo; i++)
		p *= base;
	return (p);
}
