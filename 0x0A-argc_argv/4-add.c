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
	int sum, i;

	sum = 0;
	if (args == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < args; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
