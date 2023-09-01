#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @args: the number of arguments
 * @argv: the vector of arguments
 * Return: always 0
 */
int main(int args, char *argv[])
{
	int n1, n2;

	if (args != 3)
		printf("Error\n");
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	return (0);
}
