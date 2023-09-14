#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Return: 0 (default)
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2;
	int (*ptr)(int, int);

	if (argv != NULL)
	{
		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}

		op = argv[2];
		if (strcmp(op, "+") != 0 && strcmp(op, "-") != 0 &&
				strcmp(op, "*") != 0 && strcmp(op, "/") != 0
				&& strcmp(op, "%") != 0)
		{
			printf("Error\n");
			exit(99);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		ptr = get_op_func(op);
		printf("%d\n", ptr(num1, num2));

	}

	return (0);
}
