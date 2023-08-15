#include "_putchar.h"

void print(int n);

/**
 * print_to_98 - prints a from n to 98
 *
 * @n: starting number
 *
 * Return: numbers
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		print(98);
		_putchar(' ');
		return;
	}
	if (n < 98)
	{
	for (i = n; i <= 98; i++)
	{
		print(i);
		_putchar(',');
		_putchar(' ');
	}
	}
	else
	{
		for (i = n; i >=  98; i--)
		{
			print(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print - print a number using putchar
 *
 * @n: int value
 *
 * Return: Always(Success)
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

