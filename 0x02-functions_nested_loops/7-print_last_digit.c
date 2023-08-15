#include "_putchar.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_last_digit - prints the last digit
 *
 * @c: int value
 *
 * Return: last_digit(Success)
 */
int print_last_digit(int c)
{
	int last, result;

	if (c == INT_MIN)
	{
		_putchar(48 + 8);
		return (48 + 8);
	}
	last = abs(c) % 10;
	result = 48 + last;
	_putchar(result);
	return (last);
}
