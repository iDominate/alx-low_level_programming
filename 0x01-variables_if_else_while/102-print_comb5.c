#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0(Success)
*/
int main(void)
{
	int i, j, l, m, i1, j1, l1, m1;

	i1 = 48;
	j1 = 49;
	l1 = 48;
	m1 = 48;
	for (l = l1; l <= 57; l++)
	{
	for (m = m1; m <= 56; m++)
	{

	for (i = i1; i <= 57; i++)
	{
		for (j = j1; j <= 57; j++)
		{
			putchar(l);
			putchar(m);
			putchar(' ');
			putchar(i);
			putchar(j);
			if (l == 57 && j == 57 && i == 57 && m == 56)
				continue;
			putchar(',');
			putchar(' ');

		}
		j1 = 48;
	}
	}
	}
	putchar('\n');

	return (0);

}


