/**
 * print_name -  prints a name.
 * @name: the name to print
 * @f: the function pointer to the printer function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
