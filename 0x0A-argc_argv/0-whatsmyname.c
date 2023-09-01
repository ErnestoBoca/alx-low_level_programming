#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @args: the number of arguments
 * @argv: the vector of arguments
 * Return: always 0
 */
int main(int args, char *argv[])
{
	(void)args;
	printf("%s\n", argv[0]);
	return (0);
}
