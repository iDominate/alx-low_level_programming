#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @n: number
 *
 * Return: void
 */
void print_triangle(int n)
{
	int i, space_count, hash_count, j, k;

	space_count = n - 1;
	hash_count = n - space_count;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < space_count; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < hash_count; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		space_count--;
		hash_count++;
	}

}
