#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @args: the number of arguments
 * @argv: the vector of arguments
 * Return: always 0
 */
int main(int args, char *argv[])
{
	(void)argv;
	printf("%d\n", args - 1);
	return (0);
}
