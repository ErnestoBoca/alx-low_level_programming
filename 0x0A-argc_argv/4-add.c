#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints its name, followed by a new line.
 * @args: the number of arguments
 * @argv: the vector of arguments
 * Return: always 0
 */
int main(int args, char *argv[])
{
	unsigned long int j;
	int sum, i;
	char *ar;

	sum = 0;
	if (args == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < args; i++)
		{
			ar = argv[i];
			for (j = 0; j < strlen(ar); j++)
			{
				if (ar[j] < 48 || ar[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(ar);
		}
		printf("%d\n", sum);
	}

	return (0);
}
