#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0(Success)
*/
int main(void)
{
	int i, j, k, i1, j1;

	k = 48;
	i1 = 49;
	j1 = 49;

	while (k <= 55)
	{

	for (i = i1; i <= 56; i++)
	{
		for (j = j1; j <= 57; j++)
		{
			if (j - i < 1)
			{
				continue;
			}
			putchar(k);
			putchar(i);
			putchar(j);
			if (k == 55 && j == 57 && i == 56)
				continue;
			putchar(',');
			putchar(' ');

		}
	}
		k++;
		i1 = k + 1;
		j1 = k + 2;
	}
	putchar('\n');

	return (0);

}


