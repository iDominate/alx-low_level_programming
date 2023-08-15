#include <stdio.h>
#include "_putchar.h"


/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0(Success)
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
