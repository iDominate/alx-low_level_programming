#include <stdio.h>


/**
 * main - entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	long long int k;

	i = 2;
	k = 612852475143;

	while (k > 1)
	{
		if (k % i == 0)
			k /= i;
		else
			i++;

	}
	printf("%d\n", i);
	return (0);
}


