

/**
 * print_name - prints a name
 *
 * @f: function pointer
 * @name: the name to be printed
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
