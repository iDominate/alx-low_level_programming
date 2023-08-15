#include "main.h"
#include "_putchar.h"


/**
 * print_times_table - prints all multiplication tables
 *
 * @num: int
 *
 * Return: Always void
 */
void print_times_table(int num)
{
	int i, j, result;

	if (num > 15 || num < 0)
		return;
	for (i = 0; i <= num; i++)
	{
		for (j = 0; j <= num; j++)
		{
			result = i * j;
			if (i != 0 && result != 0)
			{
				if (result < 10)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				}
				else if (result < 100 && result >= 10)
				{
				_putchar(' ');
				_putchar(' ');
				}
				else
				{
				_putchar(' ');
				}
			}
			print(result);
			if (j != num)
			_putchar(',');
			if (i == 0 && j != num)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			if (j == num)
				_putchar('\n');
		}
	}
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
