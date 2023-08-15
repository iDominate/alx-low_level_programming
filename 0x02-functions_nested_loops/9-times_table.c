#include "main.h"
#include "_putchar.h"


/**
 * times_table - prints all multiplication tables
 *
 * Return: Always void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result != 0)
			{

				if (result < 10)
				{
					_putchar(' ');
				}
					_putchar(' ');
			}
			print(result);
			if (j != 9)
				_putchar(',');
			if (i == 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (j == 9)
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
