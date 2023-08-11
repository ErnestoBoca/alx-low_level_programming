#include <stdio.h>

/**
 * main - prints combinations of two digits
 *
 * Return: always 0 (default)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 47; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
