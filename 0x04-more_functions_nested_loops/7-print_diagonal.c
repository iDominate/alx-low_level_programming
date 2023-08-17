#include "main.h"

/**
 * print_diagonal - prints a number of spaces given a number
 *
 * @n: number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		if (!(n <= 0))
		_putchar('\\');
		_putchar('\n');
	}
}
