#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @args: the number of arguments
 * @argv: the vector of arguments
 * Return: always 0
 */
int main(int args, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
		printf("%s\n", argv[i]);
	return (0);
}
