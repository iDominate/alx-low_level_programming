#include <stdio.h>
#include "_putchar.h"

/**
 * print_alphabel - print alphabet
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
