#include <stdio.h>


/**
 * main - entry point
 *
 * Return: fibonacci numbers
 */
int main(void)
{
	int number_counter;
	long int iter, previous_number, med;

	previous_number = number_counter =  0;
	iter = 1;
	while (number_counter < 51)
	{
		med = iter;
		iter = previous_number + iter;
		previous_number = med;

		printf("%ld", iter);
		if (number_counter != 50)
			printf(", ");
		number_counter++;
	}
	printf("\n");
	return (0);
}
