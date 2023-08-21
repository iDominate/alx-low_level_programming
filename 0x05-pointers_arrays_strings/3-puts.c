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
	size_t i, str_len;

	str_len = strlen(str);
	if (str_len == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < str_len; i++)
	{
		_putchar((int) str[i]);
	}
	_putchar('\n');
}
