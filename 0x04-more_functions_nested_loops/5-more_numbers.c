#include "main.h"

/**
 * more_numbers - prints numbers from 1 to 14
 *
 * Return: void(Success)
 */
void more_numbers(void)
{
	int n, i;

	for(i = 0; i <= 9; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 10)
			{
				_putchar((n / 10) + '0');
			}
		_putchar((n % 10) + '0');
	}
		_putchar('\n');
	}
	
}
