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
	int count_c, amount;

	count_c = 0;
	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[1]);
		if (amount < 0)
			printf("0\n");
		else
		{
			while (amount != 0)
			{
				if (amount >= 25)
					amount -= 25;
				else if (amount >= 10)
					amount -= 10;
				else if (amount >= 5)
					amount -= 5;
				else if (amount >= 2)
					amount -= 2;
				else
					amount -= 1;
				count_c++;
			}
			printf("%d\n", count_c);
		}
		return (0);
	}
}
