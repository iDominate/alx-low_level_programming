#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: fibonacci numbers
 */
int main(void)
{
	int number_counter;
	unsigned  long int iter, previous_number, med;

	previous_number = number_counter =  0;
	iter = 1;
	while (number_counter < 99)
	{
		med = iter;
		iter = labs(previous_number + iter);
		previous_number = med;

		printf("%ld", iter);
		if (number_counter != 98)
			printf(", ");
		number_counter++;
	}
	printf("\n");
	return (0);
}
