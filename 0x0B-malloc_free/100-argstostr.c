#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments
 * @av: the vector of arguments
 * Return: a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, size, j, k;
	char *args;

	size = 0;
	args = 0;
	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}

	}
	size++;
	args = malloc(sizeof(char) * size + ac);
	if (args != NULL)
	{
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				args[k] = av[i][j];
				k++;
			}
			args[k] = '\n';
			k++;
		}
	}

	return (args);
}
