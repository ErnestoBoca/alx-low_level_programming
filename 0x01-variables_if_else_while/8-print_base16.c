#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: Always 0 (default)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
