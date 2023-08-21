#include <string.h>
#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{

	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
