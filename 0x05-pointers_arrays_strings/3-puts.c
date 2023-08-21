#include <string.h>
#include "main.h"

/**
 * _puts - prints a string to the standard output
 *
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	size_t i;

	for (i = 0; i < (strlen(str) - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
