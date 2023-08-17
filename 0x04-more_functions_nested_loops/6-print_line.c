#include "main.h"

/**
 * print_line - prints a series of _ given a number
 *
 * @n: number
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');

}
