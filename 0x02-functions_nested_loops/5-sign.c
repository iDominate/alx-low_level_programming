#include "_putchar.h"

/**
 * print_sign - prints the sign of the digit
 *
 * @c: int
 *
 * Return: 1(positive) | -1(negative) | 0(zero)
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	} else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
