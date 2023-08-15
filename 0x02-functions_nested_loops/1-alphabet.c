#include <stdio.h>
#include "_putchar.h"

/**
 * print_alphabel - print alphabet
 *
 * Return: Always void
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 113; i++)
	{
		put_char(i);
	}
	put_char('\n');
}
