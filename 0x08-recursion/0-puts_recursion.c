#include "main.h"

/**
 * _put_recursion - prints a char to stdout
 *
 * @s: the string
 *
 * Return: void
 */
void _put_recursion(char *s)
{
	if (*s)
		_putchar('\n');
	else
	{
		_putchar(*s++);
		_put_recursion(s);
	}
}
