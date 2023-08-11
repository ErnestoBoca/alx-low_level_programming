#include <stdio.h>

/**
 * main - prints alphabet except e and q
 *
 * Return: Always 0 (default)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
