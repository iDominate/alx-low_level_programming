#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0(Success)
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j - i < 1)
			{
				continue;
			}
			putchar(i);
			putchar(j);

			if (i != 8 && j != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);

}


