#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  prints anything.
 * @format:  list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c, *str;

	i = 0;
	c = format[i];
	va_start(args, format);
	while (c != '\0')
	{
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
		c = format[i];
	}
	printf("\n");
	va_end(args);
}
