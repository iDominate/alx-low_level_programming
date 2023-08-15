#include <stdio.h>
#include "_putchar.h"


/**
 * jack_bauer - prints hours and minutes
 *
 * Return: Always 0(Success)
 */
void jack_bauer(void)
{
	int hour1, hour2, minute1, minute2;

	for (hour1 = 48; hour1 < 51; hour1++)
	{
		for (hour2 = 48; hour2 <= 57; hour2++)
		{
			if (hour1 == 50 && hour2 == 52)
				break;
			for (minute1 = 48; minute1 < 54; minute1++)
			{
				for (minute2 = 48; minute2 <= 57; minute2++)
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(minute1);
					_putchar(minute2);
					_putchar('\n');
				}
			}
		}
	}

}
