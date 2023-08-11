#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (abs(-last_digit) > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (abs(-last_digit) ==  0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
	printf(
		"Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);

	return (0);
}