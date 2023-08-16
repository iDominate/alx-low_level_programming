#include <stdio.h>


/**
 * main - entry point
 *
 * Return: fibonacci numbers
 */
int main(void)
{
	long int iter, previous_number, med, sum;

	previous_number = 0;
	iter = 1;
	sum = 0;
	while (iter < 4000000)
	{
		med = iter;
		iter = previous_number + iter;
		previous_number = med;
		if (iter % 2 == 0)
			sum += iter;
	}
	printf("%ld\n", sum);
	return (0);
}
