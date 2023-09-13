#include <stdlib.h>
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
	if (f == NULL || name == NULL)
		return;
	f(name);
}
