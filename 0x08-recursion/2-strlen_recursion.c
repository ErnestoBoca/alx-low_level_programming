/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string in case
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
