/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array that will be reversed
 * @n: numbers of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, aux;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
		j--;
	}
}
