#include <stdio.h>

/**
 * main - prints numbers followed by ,
 *
 * Return: always 0 (default)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
