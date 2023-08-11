#include <stdio.h>

/**
 * main - reverse alphabet
 *
 * Return: always 0 (default)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
