#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: always 0 (default)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
