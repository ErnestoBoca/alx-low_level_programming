#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (default)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
