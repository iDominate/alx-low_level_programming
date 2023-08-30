

/**
 * _strlen_recursion - display string length
 *
 * @c: string
 *
 * Return: int
 */
int _strlen_recursion(char *c)
{
	if (!(*c))
		return (0);
	return (1 + _strlen_recursion(c + 1));
}


