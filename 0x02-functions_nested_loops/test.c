#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int hour1, hour2, minute1, minute2;
	for (hour1 = 48; hour1 < 51; hour1++)
	{
		
		for (hour2 = 48; hour2 <= 57; hour2++)
		{
			if( hour1 == 50 && hour2 == 52)
				break;
			for (minute1 = 48; minute1 < 54; minute1++)
			{
				for (minute2 = 48; minute2 <= 57; minute2++)
				{
					putchar(hour1);
					putchar(hour2);
					putchar(':');
					putchar(minute1);
					putchar(minute2);
					putchar('\n');
					
				}

			}
		}
	}

}
